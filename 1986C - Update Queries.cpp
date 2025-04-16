//week-3 XPSC Club
//https://codeforces.com/problemset/problem/1986/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> indices(m);
        vector<char> chars(m);

        for (int i = 0; i < m; ++i) {
            cin >> indices[i];
            indices[i]--;
        }

        for (int i = 0; i < m; ++i) {
            cin >> chars[i];
        }

        sort(indices.begin(), indices.end());
        sort(chars.begin(), chars.end());

        priority_queue<char, vector<char>, greater<char>> pq(chars.begin(), chars.end());
        vector<bool> vis(n, false);

        for (int i = 0; i < m; ++i) {
            int pos = indices[i];
            char ch = pq.top();
            pq.pop();

            if (!vis[pos] || ch < s[pos]) {
                s[pos] = ch;
                vis[pos] = true;
            } else {
                pq.push(ch);
            }
        }

        cout << s << endl;
    }

    return 0;
}
