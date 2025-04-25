//WEEK 4
//https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;

    while(t--){
        long long a, b, n ;
        cin >> a >> b >> n ;
        long long r = b ;

        for(int i = 0 ; i < n ; i++){
            long long k ;
            cin >> k ;
            r += min(a-1 , k) ;
        }
        
        cout << r << endl ;
    }

    return 0;
}
