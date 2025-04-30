//Week 5
//https://codeforces.com/problemset/problem/1006/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> r1(n + 1, 0), r2(n + 1, 0);
    for (int i = 0; i < n; i++) {
        r1[i + 1] = r1[i] + a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        r2[i] = r2[i + 1] + a[i];
    }

    int l = 0, r = n;
    long long ans = 0;

    while (l <= r) {
        if (r1[l] == r2[r]) {
            ans = r1[l];
            l++;
            r--;
        }
        while (l <= r && r1[l] < r2[r]){
            l++;
        }
        while (l <= r && r1[l] > r2[r]){
            r--;
        }
    }

    cout << ans << endl;
    return 0;
}
