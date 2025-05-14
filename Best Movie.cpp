//practice contest in codechef
//https://www.codechef.com/START186D/problems/BESTMOVIE

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int r = INT_MAX;
        
        for (int i = 0; i < N; i++) {
            int A, B;
            cin >> A >> B;
            
            if (A >= 7) {
                if (B < r) {
                    r = B;
                }
            }
        }
        
        if (r == INT_MAX)
            cout << -1 << endl;
        else
            cout << r << endl;
    }

    return 0;
}
