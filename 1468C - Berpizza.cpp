//week 3 - XPSC club
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    int cs_n = 1 ;
    cin >> n ; 
    set<pair<int,int>> s ;
    multiset<pair<int,int>> ml ;
    vector<int> ans ;
    for(int i = 0 ; i < n ; i++ ){
        int type;
        cin >> type ;
        if(type == 1){
            int money;
            cin >> money ;
            s.insert({cs_n,money});
            ml.insert({money,-cs_n});
            cs_n++ ;
        }
        else if(type == 2){
            int pos = s.begin()->first, money = s.begin()->second; 
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else{
            int pos = -ml.rbegin()->second , money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }
    
    for(auto val : ans){
        cout << val << " " ;
    }
    cout << '\n' ;

    return 0; 
}
