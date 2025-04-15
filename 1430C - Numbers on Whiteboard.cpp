//week 3 - XPSC Club
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t ;
    cin >> t;
    
    while (t--) {
        priority_queue<long long> pq;
        long long n ;
        cin >> n;
        
        for (long long i = n; i >= 1; i--) {
            pq.push(i);
        }

        cout << 2 << endl;
        while (pq.size() > 1) {
            long long p1 = pq.top();
            pq.pop();
            long long p2 = pq.top();
            pq.pop();

            cout << p1 << " " << p2 << endl;

            long long result = p1 + p2;

            if (result & 1) {
                result++;
            }
            result /= 2;

            pq.push(result);
        }
    }

    return 0;
}
