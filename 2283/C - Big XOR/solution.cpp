#include <bits/stdc++.h>
using namespace std;
 
int main() {
            
            int t;
            cin>>t;
            while(t--){
                int n;
                cin>>n;
                
                long long xr=0,orr=0;
                for(int i=1;i<n+1;i++){
                    xr ^= i;
                    orr |= i;
                }
                
                
                vector<int>ans(n+1,0);
                
                
            for (int add = 0; add <= 1; add++) {
        
                long long cur = xr;
                long long target = 2 * orr + add;
                long long x = 1;
                int j = 0;
                vector<int>temp(n+1,0);        
                while(x<=n){
                    
                    
                if (((cur >> j) & 1LL) !=
                    ((target >> j) & 1LL)) {
    
                    temp[x] = 1;
    
                    cur ^= x ^ (2 * x);
                    }
                     x *= 2;
                    j++;
                    
                }
                
                if (cur == target) {
                    ans = temp;
                    break;
                }
                
            }
                
                
                for(int i=1;i<n+1;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
                
            }
 
}