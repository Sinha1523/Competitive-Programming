// week 3 - XPSC Club
//https://codeforces.com/problemset/problem/2014/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int rb = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                rb += a[i];
            } else if (a[i] == 0 && rb > 0) {
                rb--;
                cnt++;
            }
        }
        
        cout << cnt << endl;
    }

    return 0;
}
