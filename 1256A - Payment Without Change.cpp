//week 4 
//https://codeforces.com/problemset/status?my=on
//https://codeforces.com/contest/1256/submission/317174395

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long r1 = min(S / n, a);
        long long r2 = S - r1 * n;

        if (r2 <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
