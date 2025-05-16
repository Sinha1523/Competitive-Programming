//Bit Manipulation Related Problem
//https://codeforces.com/problemset/problem/1994/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool ans = true ;
        for(int i = 0 ; ans && i < s.size() ; i++){
            if(s[i] == '1'){
                break ;
            }
            else if(t[i] == '1'){
                ans = false ;
            }
        }
        if(ans){
            cout << "Yes" << endl ;
        }
        else{
            cout << "No" << endl ;
        }
    }

    return 0;
}
