//Week 5
//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    long long s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0 , r = 0 ;
    long long sum = 0 , ans = 0;

    while (r < n) {
        sum += a[r];

        while (sum >= s) {
            ans += n - r;
            sum -= a[l];
            l++;
        }
        r++ ;
    }
        cout << ans << endl;
    return 0;
}
