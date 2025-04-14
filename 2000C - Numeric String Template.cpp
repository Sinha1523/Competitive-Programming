// week 3 - XPSC Club
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            if (a.size() != s.size()) {
                cout << "NO\n";
                continue;
            }

            map<int, char> n1;
            map<char, int> n2;
            bool valid = true;

            for (size_t i = 0; i < a.size(); ++i) {
                int num = a[i];
                char ch = s[i];

                if (n1.count(num)) {
                    if (n1[num] != ch) {
                        valid = false;
                        break;
                    }
                } else {
                    n1[num] = ch;
                }

                if (n2.count(ch)) {
                    if (n2[ch] != num) {
                        valid = false;
                        break;
                    }
                } else {
                    n2[ch] = num;
                }
            }

            if (valid) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
