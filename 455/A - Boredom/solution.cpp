#include <bits/stdc++.h>
using namespace std;
 
long long dp[100005];
long long sum[100005];
int n;
 
// tabaluation mthod
// long long recur(int i){
        
//         if(i<0)return 0;
//         if(dp[i]!=-1)return dp[i];
//         long long t = recur(i-2) + sum[i];
        
//         long long nt = recur(i-1);
    
//         return dp[i] = max(t,nt);
// }
 
 
 
int main() {
	            memset(dp,-1,sizeof(dp));
	            cin>>n;
	            for(int i=0;i<n;i++){
	                int x;
	                cin>>x;
	                sum[x] += x;
	            }
	            
	            dp[0] = sum[0];
	            dp[1] = max(sum[0],sum[1]);
 
	            for(int i=2;i<100001;i++){
	                dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
	            }
	            
	            cout<<dp[100000]<<endl;
	            
}