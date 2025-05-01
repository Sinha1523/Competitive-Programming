//Week 5
//https://codeforces.com/problemset/problem/1992/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(k);
        for (int i = 0 ; i < k ; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int ans = 0;
        for (int i = 0; i < k -1 ; i++){
            int r = 2 * a[i] ;
            ans += r - 1;
        }
        cout << ans << endl;
    }

    return 0;
}
