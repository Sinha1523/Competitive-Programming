//Pracetice problem
//Week 7 
//https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = 0;

        for (int j = 30; j >= 0; j--) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (((a[i] >> j) & 1) == 0) {
                    count++; 
                }
            }

            if (count <= k) {
                k -= count;
                result |= (1 << j); 
            }
        }

        cout << result << '\n';
    }

    return 0;
}
