//week 2 _ XPSC club
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int min_length = INT_MAX; 
        for (int l = 0; l < n; ++l) {
            set<int> seen;  
            int x = 0;  
 
        for (int r = l; r < n; ++r) {
                seen.insert(a[r]);
        for (int num : seen) {
                    int curr = a[r] ^ num;
                    x = max(x, curr);
                }
        if (x >= k) {
                    min_length = min(min_length, r - l + 1);
                }
            }
        }
        if (min_length == INT_MAX) {
            cout << "-1\n";  
        } else {
            cout << min_length << "\n";  
        }
    }
 
    return 0;
}
