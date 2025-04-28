// Week 5
//https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0, r = 0 , sum = 0, len = -1;

        while (r < n) {
            sum += a[r];
            while (sum > s && l <= r) {
                sum -= a[l];
                l++;
            }

            if (sum == s) {
                len = max(len, r - l + 1);
            }
            r++ ;
        }

        if (len == -1) {
            cout << "-1" << endl;
        } else {
            cout << n - len << endl ; 
        }
    }

    return 0;
}
