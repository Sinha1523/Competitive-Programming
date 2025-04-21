//week 4 - XPSC Club
//https://codeforces.com/contest/1582/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int ans = INT_MAX;
        bool pos = false;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int l = 0, r = n - 1;
            int cnt = 0;

            while (l < r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == ch) {
                    cnt++;
                    l++;
                } else if (s[r] == ch) {
                    cnt++;
                    r--;
                } else {
                    break;
                }
            }
            
            if (l >= r) {
                pos = true;
                ans = min(ans, cnt);
            }
        }

        if (pos) {
            cout << ans << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
