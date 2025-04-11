//week 2 XPSC Club
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t = 1, t1 = 0;
    cin >> t;
 
    while (t1++, t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int found = 1;
        int ans = 0, ans1 = 0;
 
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) ans++;
            if (i % 2) {
                if (b[i] == '0') ans1++;
            } else if (a[i] == '0') ans1++;
        }
        if (ans1 < ans){
             found = 0;
        }
        ans = ans1 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2) ans++;
            if (i % 2) {
                if (a[i] == '0') ans1++;
            } else if (b[i] == '0') ans1++;
        }
 
        if (ans1 < ans) found = 0;
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0; 
}
