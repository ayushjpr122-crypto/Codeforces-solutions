#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	        int t;
	        cin>>t;
	        while(t--){
	            long long n,l;
	            cin>>n>>l;
	            long long arr[n];
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	            }
	            
	            sort(arr,arr+n);
	            vector<long long>pf(n+1,0);
	            for(int i=0;i<n;i++){
	                pf[i+1] = pf[i] + arr[i];
	            }
	            
	            long long ans = pf[n]-arr[n-1];
	            long long root = sqrtl(l-1);
	            
	                    int j = 0;
	       for(int k=1;k<=root;k++){
	            long long ct = 0;
	            while(j<n-1 && arr[j]<=k){
	                j++;
	            }
	                long long y = (l-1)/k;
	                if(arr[n-1]>y){
	                    ct += max(0LL,arr[n-1] - y);
	                }
	                ct += (pf[n-1] - pf[j]) - (n-1-j)*k;
	  
	                ans = min(ans,ct);
	            }
	            cout<<ans<<endl;
	            
	        }
 
}