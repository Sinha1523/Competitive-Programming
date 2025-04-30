//Week 5
//https://codeforces.com/problemset/problem/1987/A

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
        int ans = n + (n - 1) * (k - 1) ;
        cout << ans << endl;
    }
    return 0;
}
