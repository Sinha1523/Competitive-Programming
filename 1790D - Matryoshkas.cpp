//week 3 - XPSC Club
//https://codeforces.com/problemset/problem/1790/D
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  

    ll t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];  
        }

        sort(a.begin(), a.end());
        a.push_back(1e9 + 3);  

        ll prev = a[0], c = 1, cnt = 0, m = 0;
        
        for (ll i = 1; i <= n; i++) {
            if (a[i] == prev) {
                c++;  
            } else {
                if (c < m) {
                    cnt += (m - c);  
                    m = c;  
                } else if (c > m) {
                    m = c;  
                }

                if (a[i] > prev + 1) {
                    cnt += m;  
                    m = 0;  
                }
                
                c = 1;  
            }

            prev = a[i];  
        }

        cout << cnt << endl;  
    }

    return 0;  
}
