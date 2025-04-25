//Week 4
//https://codeforces.com/problemset/problem/1784/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;

    while(t--){
        int n ;
        cin >> n ;
        vector <int> a(n) ;
        long long ans = 0 , mn = 1 ;
        for(int i = 0 ; i < n ; i++ ){
            cin >> a[i] ;
        }
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n ; i++){
            if(a[i] >= mn){
                ans += a[i] - mn ;
                mn ++ ;
            }
        }
        cout << ans << endl ;
    }

    return 0;
}
