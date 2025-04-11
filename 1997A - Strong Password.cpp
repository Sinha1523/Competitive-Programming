// week 2 _XPSC club
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        long long r = 0;
 
        for (long long i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                r = i;
                break;
            }
        }
 
        if (r == 0) {
            char c;
            if (s[0] == 'a') {
                c = 'b';
            } else {
                c = 'a';
            }
            cout << c << s << endl;
        } else {
            char c;
            if (s[r - 1] == 'a') {
                c = 'b';
            } else {
                c = 'a';
            }
            cout << s.substr(0, r) << c << s.substr(r) << endl;
        }
    }
 
    return 0;
}
