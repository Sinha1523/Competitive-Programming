// Week 2 : topic based problem in XPSC club in phitron ,, codeforces problem

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
        string sr;
        cin >> sr;
        set<char> s(sr.begin(), sr.end());
        string r(s.begin(), s.end());
        int l = r.size();
        
        map<char, char> mp;
        
        for (int i = 0; i < l; i++) {
            mp[r[i]] = r[l - i - 1]; 
        }
 
        string ans;
        for (auto& i : sr) {
            ans += mp[i]; 
        }
        
        cout << ans << '\n'; 
    }
 
    return 0;
}
