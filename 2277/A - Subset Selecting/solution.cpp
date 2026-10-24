#include <bits/stdc++.h>
using namespace std;
 
// good problem //
int main() {
	        
	            int t;
	            cin>>t;
	            while(t--){
	                int n,k;
	                cin>>n>>k;
	                int arr[n];
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
	                
	                map<int,int>mp;
	                for(int i=0;i<n;i++){
	                    mp[arr[i]]++;
	                }
	                
	                int i=0,ans = 0,count=0;
	                while(1){
	                    if(mp[i] == 0)break;
	                    count+= mp[i];
	                    if(count >= k*(i+1)){
	                        ans++;
	                    }
	                    else{
	                        break;
	                    }
	                    i++;
	                }
	                
	                cout<<ans<<endl;
	                
	            }
 
}