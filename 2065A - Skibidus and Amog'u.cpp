//week 2 XPSC club
#include <bits/stdc++.h>
using namespace std ;
 
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n ;
    cin >> n ;
    
    for(int i = 0 ; i<n ; i++){
        string s ;
        cin >> s ;
        string r = s.substr(0,s.size()-2) ;
        string result = r + "i" ;
        cout << result << endl ;
    }
 
    
    return 0 ;
}
