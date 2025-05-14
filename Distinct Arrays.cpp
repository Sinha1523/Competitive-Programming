//Pracetice contest in codechef
//https://www.codechef.com/START186D/problems/DISTARR

#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        long long r = 1;
        for (int i = 0; i < N; ++i) {
            int k = A[i] - i;
            if (k <= 0) {
                r = 0;
                break;
            }
            r = (r * k) % MOD;
        }

        cout << r << '\n';
    }

    return 0;
}
