//contest div-4 codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n ;
    cin >> n ;
    cin.ignore();
    for (int i = 0 ; i < n ; i++){
        string s ;
        getline(cin,s);
        stringstream ss(s);
        string word1, word2 , word3 ;
        ss >> word1 >> word2 >> word3 ;
        string new_s ;
        new_s += word1[0];
        new_s += word2[0];
        new_s += word3[0];
        cout << new_s << endl ;
    }

    return 0;
}
