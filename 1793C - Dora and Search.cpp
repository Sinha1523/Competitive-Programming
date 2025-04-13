//week 3 - XPSC club
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
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }

        int left = 0, right = n - 1;
        int mn = 1, mx = n;

        while (left < right) {
            if (a[left] == mn) {
                left++;
                mn++;
            }
            else if (a[right] == mn) {
                right--;
                mn++;
            }
            else if (a[left] == mx) {
               left++;
                mx--;
            }
            else if (a[right] == mx) {
                right--;
                mx--;
            }
            else {
                break; 
            }
        }

        if (left < right) {
            cout << (left + 1) << " " << (right + 1) << '\n';
        }
        else {
            cout << "-1\n";
        }
    }

    return 0;
}
