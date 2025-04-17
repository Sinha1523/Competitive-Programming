//week - 3 XPSC Club
//https://codeforces.com/problemset/problem/2003/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t; 
    cin >> t; 
    while (t--) {
        long long n; 
        cin >> n; 
        string s; 
        cin >> s; 
        
        if (s[0] != s.back()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
