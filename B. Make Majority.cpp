//Week 5 - XPSC Club
// Practice problem
//https://codeforces.com/problemset/problem/1988/B

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
        string s;
        cin >> s;

        if (s[0] == '1' && s[n - 1] == '1') {
            cout << "Yes\n";
            continue;
        }

        bool p1 = false, p2 = false;
        long long cnt = 0;

        for (long long i = 0; i < n; i++) {
            if (s[i] == '1'){
                cnt++;
            }
            else{
                cnt = 0;
            }

            if (cnt >= 2) {
                if (!p1){
                    p1 = true;
                }
                else{
                    p2 = true;
                }
            }
        }

        if ((s[0] == '1' || s[n - 1] == '1') && p1) {
            cout << "Yes\n";
        } else if (p2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
