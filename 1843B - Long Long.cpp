//week 4 - XPSC Club
//https://codeforces.com/problemset/problem/1843/B

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
        long long sum = 0;
        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
            sum += abs(x);
        }
        int ans = 0;
        int cnt = 0;
        for (auto x : v) {
            if (x != 0 || cnt > 0) {
            if (x <= 0) {
                    cnt++;
                } else {
                if (cnt > 0) {
                        ans++;
                    }
                    cnt = 0;
                }
            }
        }
        if (cnt) {
            ans++;
        }
        cout << sum << " " << ans << endl;
    }
    return 0;
}
