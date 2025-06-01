// Binary Search practice Problem
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , q ;
    cin >> n >> q ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < q  ; i++){
        int k ;
        cin >> k ;
        int l = 0 , r = n - 1 , mid ,ans = -1 ;
        while(l <= r){
        mid = (l+r) / 2 ;
        if(k >= a[mid]){
            ans = mid ;
            l = mid + 1;
        }
        else {
            r = mid - 1 ;
         }
        }
      cout << ans+1 << endl ;
    }

    return 0;
}
