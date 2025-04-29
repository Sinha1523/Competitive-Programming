//Week 5
//https://codeforces.com/problemset/problem/1547/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int k, n, m;
		cin >> k >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(m);
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		int i = 0, j = 0 , ans = 0 ;
		vector<int> v;
		while (i < n || j < m) {
			int r1 = i;
			int r2 = j;
			while (i < n) {
				if (a[i] == 0) {
					v.push_back(a[i]);
					i++;
					k++;
				} else if (a[i] <= k) {
					v.push_back(a[i]);
					i++;
				} else {
					break;
				}
			}
			while (j < m) {
				if (b[j] == 0) {
					v.push_back(b[j]);
					j++;
					k++;
				} else if (b[j] <= k) {
					v.push_back(b[j]);
					j++;
				} else {
					break;
				}
			}
			if (r1 == i && r2 == j) {
				ans = -1;
				break;
			}
		}
		if (ans != -1) {
			for (auto& x : v) {
				cout << x << " ";
			}
		} else {
			cout << ans  ;
		}
		cout << '\n';
	}
	return 0;
}
