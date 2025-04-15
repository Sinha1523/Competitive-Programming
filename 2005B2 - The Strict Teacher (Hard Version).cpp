// week 3 - XPSC Club
//https://codeforces.com/problemset/problem/2005/B2
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> s(m);
        for (int i = 0; i < m; i++) {
            cin >> s[i];
        }

        sort(s.begin(), s.end());

        while (q--) {
            int d;
            cin >> d;

            if (d < s[0]) {
                cout << s[0] - 1 << '\n';
            } else if (d > s[m - 1]) {
                cout << n - s[m - 1] << '\n';
            } else {
                auto it = lower_bound(s.begin(), s.end(), d);
                auto j = it;
                j--;
                int left = *j, right = *it;
                int mid = (right + left) / 2;
                cout << min(abs(mid - left), abs(mid - right)) << '\n';
            }
        }
    }
    return 0;
}
