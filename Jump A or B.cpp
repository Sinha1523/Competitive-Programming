//pracetice contest in codechef
//https://www.codechef.com/START186D/problems/JUMPAB

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;

        long long n = M - N * B;
        long long k = A - B; 

        if (k == 0) {
            cout << (M == N * A ? "Yes" : "No") << endl;
            continue;
        }

        if (n % k == 0) {
            long long x = n / k;
            if (x >= 0 && x <= N)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
