//week - 3 XPSC Club 
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, W;
        cin >> n >> W;

        map<int, int> wid_c; 
        vector<int> wid; 
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            wid_c[w]++;
            if (find(wid.begin(), wid.end(), w) == wid.end())
                wid.push_back(w);
        }

        sort(wid.rbegin(), wid.rend());

        int height = 0; 

        while (!wid.empty()) {
            height++;
            int r_wid = W;

            for (auto it = wid.begin(); it != wid.end();) {
                int width = *it;

                while (r_wid >= width && wid_c[width] > 0) {
                    r_wid -= width;
                    wid_c[width]--;
                }

                if (wid_c[width] == 0) {
                    it = wid.erase(it);
                } else {
                    ++it;
                }
            }
        }

        cout << height << endl;
    }

    return 0;
}
