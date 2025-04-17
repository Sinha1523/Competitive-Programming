//https://codeforces.com/problemset/problem/2093/B
// week 3 - XPSC Club

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int ans = 0;
        bool result = false;
        int k = -1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != '0') {
                result = true;
                k = i;
            }
            if (result) {
                if (s[i] == '0') {
                    ans++;
                }
            }
        }

        cout << (n - k - 1) + (k - ans) << "\n";
    }
    return 0;
}
