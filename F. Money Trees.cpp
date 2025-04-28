//Week 5
//https://codeforces.com/problemset/problem/1873/F

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int l = 0 , r = 0 , len = 0 , sum = 0 ;

        while (r < n ) {
            sum += a[r];

            while (r > l && b[r - 1] % b[r] != 0) {
                sum -= a[l];
                l++;
            }

            while (sum > k && l <= r) {
                sum -= a[l];
                l++;
            }

            if (sum <= k) {
                len = max(len, r - l + 1);
            }
            r++ ;
        }

        cout << len << "\n";
    }

    return 0;
}
