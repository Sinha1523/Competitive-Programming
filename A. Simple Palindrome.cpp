// Week 5 - XPSC Club
// Practice problem
//https://codeforces.com/problemset/problem/2005/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string s = "aeiou";

    while (t--) {
        int n;
        cin >> n;

        string ans = "";
        int r = n / 5;
        int k = n % 5;

        for (int i = 0; i < r; i++) {
            ans += s;
        }

        for (int i = 0; i < k; i++) {
            ans += s[i];
        }

        sort(ans.begin(), ans.end());
        cout << ans << endl ;
    }

    return 0;
}
