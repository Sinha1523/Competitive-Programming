//Week 5
//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    long long ans = 0;
    map<int, int> mp;

    for (int r = 0; r < n; r++) {
        mp[a[r]]++;

        while (mp.size() > k) {
            mp[a[l]]--;
            if (mp[a[l]] == 0) {
                mp.erase(a[l]);
            }
            l++;
        }

        ans += (r - l + 1); 
    }

    cout << ans << endl;

    return 0;
}
