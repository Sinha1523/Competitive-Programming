//week 3 - XPSC Club
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int  t ;
    cin >> t ;
    while(t--){
        long long int  n ;
        cin >> n ;
        map <long long int ,long long int > mp ;
        for(long long int  i = 0 ; i < n ; i++){
            long long int  x ;
            cin >> x ;
            mp[x]++ ;
        }
        priority_queue<long long int > pq ;
        for(auto val : mp){
            pq.push(val.second);
        }
        while(pq.size() > 1){
            long long int  p1 = pq.top();
            pq.pop();
            long long int  p2 = pq.top();
            pq.pop();
            p1--;
            p2--;
            if(p1) pq.push(p1);
            if(p2) pq.push(p2);
        }
        if(pq.empty()){
            cout << 0 << endl ;
        }
        else {
            cout << pq.top() << endl ;
        }

    }


    return 0; 
}
