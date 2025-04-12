//week 3 - XPSC Club
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    sort(a,a+n);
    int day = 1 , ct = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] >= day){
            day++ ;
            ct++ ;
        }
    }
    cout << ct << endl ;


    return 0; 
}
