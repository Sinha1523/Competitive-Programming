//Week 4
//https://codeforces.com/problemset/problem/1857/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int, greater<int>> mp;

        int r = n * (n - 1) / 2;
        for (int i = 0; i < r; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int x = 0;
        for (auto& k : mp) {
            while (k.second > 0) {
                cout << k.first << ' ';
                k.second -= x;
                x++;
            }
        }
        cout << '\n';
    }

    return 0;
}
