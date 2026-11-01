#include <bits/stdc++.h>
using namespace std;
 
long long dp[100005];
int n,a,b,c;
 
long long recur(int i){
        
        if(i==0)return 0;
        
        if(i<0)return -1e9;
        
        if(dp[i]!=-1)return dp[i];
        
        long long x = recur(i-a)+1;
        long long y = recur(i-b)+1;
        long long z = recur(i-c)+1;
    
        return dp[i] = max({x,y,z});
}
 
 
 
int main() {
	            memset(dp,-1,sizeof(dp));
	            cin>>n>>a>>b>>c;
	       
	            
	            cout<<recur(n)<<endl;
	            
}