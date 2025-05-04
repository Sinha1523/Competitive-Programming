//Week 6 XPSC Club
//Practice problem
//https://codeforces.com/problemset/problem/1948/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (long long i = 0; 2 * i < n; i++) {
            if (i % 2 == 0)
                cout << "BB";
            else
                cout << "AA";
        }

        cout << endl;
    }

    return 0;
}
