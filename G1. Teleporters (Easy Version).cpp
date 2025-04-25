//Week 4
//https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--){
        long long n , c ;
        cin >> n >> c ;
        int res = 0 ;
        vector<long long> a(n);
        
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            a[i] += i + 1 ;
        }
        sort(a.begin(),a.end()) ;
        for(int i = 0 ; i < n ; i++){
            c -= a[i] ;
            if(c >= 0){
                res++ ;
            }
        }
        cout << res << endl ;
    }

    return 0;
}
