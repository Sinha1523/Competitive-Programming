// Pracetice problem 
//https://codeforces.com/problemset/problem/762/A

#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , k ;
    cin >> n >> k ;
    vector<int> result ;
    for(int i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            result.push_back(i);
            if(i != n / i){
                result.push_back(n/i);
            }
        }
    }
    sort( result.begin() , result.end());
    if(result.size() < k){
        cout << "-1" << endl ;
    }
    else{
        cout << result[k - 1] << endl ;
    }

    return 0 ;
}
