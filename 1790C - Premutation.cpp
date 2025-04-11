//Week 2 _ XPSC Club
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin >> n;
        int arr[n][n-1];
        map<int,int> m;
        int ch;
 
        for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
                cin >> arr[i][j];
            if(j == n-2){
            if(m[arr[i][j]]>= 1)ch = arr[i][j]; 
 
                m[arr[i][j]]++;
            }
          }
        }
 
        for (int i = 0; i<n; i++){
        if (arr[i][n-2] != ch){
            for(int j = 0; j<n-1; j++){
                    cout << arr[i][j] << " ";
                }
             break;
            }
        }
        cout << ch << endl;
 
    }
 
    return 0;
}
