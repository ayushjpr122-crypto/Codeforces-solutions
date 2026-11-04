#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                int arr[n];
	                
 
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
                    
                    int ans = 0;    
	                for(int i=0;i<n;i++){
	                    int cnt = 0;
	                    for(int j=0;j<n;j++){
	                        if(arr[j]%arr[i] == 0){
	                            cnt++;
	                        }
	                    }
	                    ans = max(ans,cnt);
	                }
	                
	                cout<<n-ans<<endl;
	                
	            }
 
}