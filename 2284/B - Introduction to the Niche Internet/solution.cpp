#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    int t;
	    cin>>t;
	    while(t--){
	            
	            int n,k;
	            cin>>n>>k;
	            long long arr[n];
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	            }
	            sort(arr,arr+n);
	            
	            if(n==k){
	               cout<<"YES"<<endl;
	                for(int i=0;i<n;i++){
	                    cout<<arr[i]<<" ";
	                }
	                continue;
	            }
	            vector<long long>pf(n+1,0);
	            
	            for(int i=0;i<n;i++){
	                pf[i+1] = pf[i] + arr[i]; 
	            }
	           
	            long long sum = pf[n] - pf[n-k];
	            long long mx = arr[n-k-1];
	            
	            if(sum>mx*k*1LL){
	                cout<<"YES"<<endl;
	                for(int i=n-k;i<n;i++){
	                    cout<<arr[i]<<" ";
	                }
	                for(int i=n-k-1;i>=0;i--){
	                    cout<<arr[i]<<" ";
	                }
	                cout<<endl;
	            }
	            else{
	                cout<<"NO"<<endl;
	            }
	       
	            
	    }
}