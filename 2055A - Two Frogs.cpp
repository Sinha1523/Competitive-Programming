// week 2 XPSC Club
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b; 
        int m = abs(a - b) - 1; // for absolute value 
 
        if (m % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
