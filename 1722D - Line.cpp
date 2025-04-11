//week 2 XPSC Club
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    ll t; 
    cin >> t;  
    while (t--) {
        ll n; 
        cin >> n;  
        string s; 
        cin >> s;  
 
        vector<ll> a(n);
        ll sum = 0;
 
        for (ll i = 0; i < n; i++) {
            if (s[i] == 'L') 
                a[i] = i;  
            else 
                a[i] = n - i - 1;  
 
            sum += a[i];  
        }
 
        sort(a.begin(), a.end());  
 
        for (ll i = 0; i < n; i++) {
            ll t = n - a[i] - 1;  
            ll ans = sum - a[i] + t; 
            
            if (ans > sum) {
                sum = ans;  
            }
 
            cout << sum << " ";  
        }
        cout << endl;  
    }
 
    return 0;
}
