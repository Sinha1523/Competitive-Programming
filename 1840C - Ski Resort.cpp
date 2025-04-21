//week 4 XPSC Club
//https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }

        long long ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (pos[i] <= q) {
                cnt++;
            } else {
                cnt = 0; 
            }
                ans += max(0,cnt - k + 1); 
        }

        cout << ans << "\n";
    }

    return 0;
}
