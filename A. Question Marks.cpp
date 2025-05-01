//Week 5
//https://codeforces.com/problemset/problem/1993/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long a = 0, b = 0, c = 0, d = 0;
        for (long long i = 0; i < s.size(); i++) {
            if (s[i] == 'A'){
                a++;
            }
            else if (s[i] == 'B'){
                b++;
            }
            else if (s[i] == 'C'){
                c++;
            }
            else if (s[i] == 'D'){
                d++;
            }
        }

        long long cnt = 0;

        if (a < n){
            cnt += a;
        }
        else{
            cnt += n;
        }

        if (b < n){
            cnt += b;
        }
        else{
            cnt += n;
        }

        if (c < n){
            cnt += c;
        }
        else{
            cnt += n;
        }

        if (d < n){
            cnt += d;
        }
        else{
            cnt += n;
        }

        cout << cnt << "\n";
    }

    return 0;
}
