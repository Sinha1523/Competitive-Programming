// Week 5 - XPSC Club 
// Practice problem
//https://codeforces.com/problemset/problem/2030/A

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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mx = a[n - 1];
        int mn = a[n - 1];
        long long ans = 0;

        for (int i = 0; i < n - 1 ; i++) {
            mn = min(mn, a[i]);
            ans += mx - mn;
        }

        cout << ans << "\n";
    }

    return 0;
}
