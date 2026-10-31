#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char s[n][n];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
            cin >> s[i][j];
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int k =  (s[i][j] == '1') + (s[j][n-i-1] == '1') + (s[n-j-1][i] == '1') + (s[n-i-1][n-j-1] == '1');
                ans+= min(k,4-k);
            }
        }
        
        cout<<ans/4<<endl;
        
        
    }
}