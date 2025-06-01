// Binary Search Practice
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ;
    cin >> n >> m ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < m  ; i++){
        int k ;
        cin >> k ;
        int l = 0 , r = n - 1 , mid ;
        bool ok = false ;
        while(l <= r){
        mid = (l+r) / 2 ;
        if(k == a[mid]){
            ok = true ;
            break ;
        }
        else if (k < a[mid]){
            r = mid - 1 ;
        }
        else{
            l = mid + 1 ;
        }
      }
      if(ok){
        cout << "YES" << endl ;
      }
      else{
        cout << "NO" << endl ;
      }
    }

    return 0;
}
