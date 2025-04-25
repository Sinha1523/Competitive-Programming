//week 4
//https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t ;
    cin >> t ;
    
    while(t--){
        long long a, b, c ;
        cin >> a>> b >> c ;

        long long r1 = abs(a - 1) ;
        long long r2 = abs(b - c) ;
        long long r3 = abs(c - 1) ;

        if(r1 == r2 + r3){
            cout << "3" << endl ;
        }
        else if(r1 < r2 + r3){
            cout << "1" << endl ;
        }
        else{
            cout << "2" << endl ;
        }
    }

    return 0;
}
