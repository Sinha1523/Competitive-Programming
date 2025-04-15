//week 3 - XPSC Club
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, int> mp;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            for (int j = 0; j < 2; j++) {
                for (char c = 'a'; c <= 'k'; c++) {
                    if (s[j] != c) {
                        string ns = s;
                        ns[j] = c;
                        ans += mp[ns];
                    }
                }
            }
            mp[s]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
