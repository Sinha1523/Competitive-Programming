// week 4 - XPSC Club
// https://www.codechef.com/problems/FOOTBALLTIES
//Author - Sinha 

#include <bits/stdc++.h>
using namespace std ;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    int ans = 0 ;
    while(t--){
        int x,y ;
        cin >> x >> y ;
        if(x%3 == 0 || y%3 == 0){
            cout << ans << endl ;
        }
        else {
            if(x < 3 || y<3){
                if(x == y){
                    cout << x << endl ;
                }
                else if(x<y){
                    cout << x << endl ;
                }
                else{
                    cout << y << endl ;
                }
            }
            else{
                if(x%3 != 0 || y%3 !=0){
                    int p1 = x%3 ;
                    int p2 = y%3 ;
                    if(p1 == p2){
                        cout << p1 << '\n' ;}
                    else if(p1<p2){
                        cout << p1 << endl ;
                    }
                    else{
                        cout << p2 << endl ;
                    }
                }
            }
        }
    }

    return 0 ;
}
