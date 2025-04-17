//https://codeforces.com/problemset/problem/2043/A
// week 3 - XPSC Club

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        long long ans = 1;
        while (n >= 4) {
            ans *= 2;
            n /= 4;
        }
        cout << ans << endl;
    }
    
    return 0;
}
