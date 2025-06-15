// Practice problem
//https://www.codechef.com/problems/DIS2SUB

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int start = -1 , end = -1 , minl = INT_MAX ;
        vector <int> a(n);
        bool ok = false ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++){
            set<int>s ;
            for(int j = i ; j < n ; j++){
                s.insert(a[j]);
                if(s.size() >= 2){
                    int l = j - i + 1 ;
                    if(l < minl){
                        minl = min (minl,l);
                        start = i ;
                        end = j ;
                    }
                    break ;
                }
            }
        }
        if(minl != INT_MAX){
            cout << minl << endl ;
        }
        else{
            cout <<"-1" << endl ;
        }
    }
    
    return 0;
}
