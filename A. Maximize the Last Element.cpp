//Week 5
//https://codeforces.com/problemset/problem/1991/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 1) 
                ans = max(ans, x);
        }
        cout << ans << '\n';
    }

    return 0;
}
