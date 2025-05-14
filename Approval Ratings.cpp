//pracetice contest in codechef
//https://www.codechef.com/START186D/problems/APPROVAL

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        vector<int> A(5);
        int r = 0;

        for (int i = 0; i < 5; ++i) {
            cin >> A[i];
            r += A[i];
        }

        if (r >= 35) {
            cout << 0 << endl;
            continue;
        }

        sort(A.begin(), A.end()); 

        int ans = 0;
        for (int i = 0; i < 5 && r < 35; i++) {
            int k = 10 - A[i];
            r += k;
            ans++;
        }

        cout << (ans * 100) << endl;
    }

    return 0;
}
