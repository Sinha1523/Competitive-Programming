//contest div-4 codeforces
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--){
        int n,m,l,r ;
        cin >> n >> m >> l >> r ;
        int p1 = -l , p2 = r ;
        int k = m ;
        if(k > p1){
            k = p1 ;
        }
        cout << - k << " " << m - k << endl ;
    }
    return 0;
}
