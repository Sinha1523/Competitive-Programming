//Week 5
//https://codeforces.com/problemset/problem/1399/C

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

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        for (int s = 2; s <= 2 * n; s++) {
            vector<int> k(n + 1, 0);
            for (int i = 0; i < n; i++) {
                k[a[i]]++;
            }

            int t1 = 0;

            for (int a = 1; a <= n; a++) {
                int b = s - a;
                if (b >= 1 && b <= n) {
                    if (a == b) {
                        t1 += k[a] / 2;
                    } else if (a < b) {
                        t1 += min(k[a], k[b]);
                    }
                }
            }

            if (t1 > ans) {
                ans = t1;
            }
        }

        cout << ans << "\n";
    }

	return 0;
}
