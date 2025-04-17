//week 3 - XPSC Club
//https://codeforces.com/problemset/problem/1800/C2

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll r = 0;
        priority_queue<ll> pq;

        for (ll i = 0; i < n; i++) {
            if (a[i] != 0) {
                pq.push(a[i]);
            } else {
                if (!pq.empty()) {
                    r += pq.top();
                    pq.pop();
                }
            }
        }
        
        cout << r << '\n';
    }
    
    return 0;
}
