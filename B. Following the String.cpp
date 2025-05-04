//Week 6 XPSC Club
//https://codeforces.com/problemset/problem/1927/B
//practice problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector <int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        map <char,int> mp ;
        char curr = 'a' ;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 0){
                cout << curr ;
                mp[curr]++ ;
                curr++ ;
            }
            else{
                for(auto it : mp){
                    if(it.second == a[i]){
                        cout << it.first ;
                        mp[it.first]++ ;
                        break ;
                    }
                }
            }
        }
        cout << endl ;
    }

    return 0;
}
