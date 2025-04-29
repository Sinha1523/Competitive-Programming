//Week 5
//https://codeforces.com/contest/2000/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n + 1, 0);
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a[i + 1] = a[i] + x;
        }

        string s;
        cin >> s;

        ll l = 0, r = n - 1;
        ll ans = 0;

        while (l < r) {
            while (l < r && s[l] != 'L') l++;
            while (l < r && s[r] != 'R') r--;

            if (l >= r){
                break ;
            }
            ans += a[r + 1] - a[l];
            l++;
            r--;
        }

        cout << ans << '\n';
    }

    return 0;
}
