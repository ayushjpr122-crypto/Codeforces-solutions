#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	           // int t;
	           // cin>>t;
	           // while(t--){
	                int n;
	                cin>>n;
	                int arr[n],brr[n];
	                
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
	                for(int i=0;i<n;i++){
	                    cin>>brr[i];
	                }
	                map<pair<int,int>,int>mp;
	                
	                int zero = 0;
	                for(int i=0;i<n;i++){
	                    if(arr[i]==0 &&  brr[i]!=0)continue;
	                    
	                    if(arr[i] == 0 && brr[i] == 0){
	                    zero++;
	                    continue;
	                    }
	                    
	                    if(arr[i] < 0){
                            arr[i] = -arr[i];
                            brr[i] = -brr[i];
                        }
	                    if(gcd(arr[i],brr[i]) == 1){
	                        mp[{arr[i],brr[i]}]++;
	                    }
	                    else{
	                        int x = gcd(arr[i],brr[i]);
	                        arr[i]/=x;
	                        brr[i]/=x;
	                        mp[{arr[i],brr[i]}]++;
	                    }
	                }
	                
	                
	                int mx = zero;
	                for(int i=0;i<n;i++){
	                    mx = max(mx,zero + mp[{arr[i],brr[i]}]);
	                }
	                
	                cout<<mx<<endl;
	                
	           // }
 
}