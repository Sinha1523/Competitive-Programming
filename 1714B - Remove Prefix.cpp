// Week 2 _ topic based problem in XPSC Club in ptitron : codeforces problem
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);  
        map<int, int> mp;  
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool found = false;
 
        for (int i = n - 1; i >= 0; i--) {
            if (mp[a[i]] > 0) {
                cout << i + 1 << endl;
                found = true;
                break; 
            } else {
                mp[a[i]]++;
            }
        }
 
        if (!found) {
            cout << "0" << endl;  
        }
    }
 
    return 0;
}
