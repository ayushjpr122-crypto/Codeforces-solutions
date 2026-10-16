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
	                        
	                        int r = n-1;
	                        int count = 1;
	                        int ans = 0;
	                        while(r>0){
	                            if(arr[r-1] == arr[n-1]){
	                                r--;
	                                count++;
	                                continue;
	                            }
	                            else{
	                                ans++;
	                                r-=(count);
	                               // if(r>=0){
	                               // arr[r] = arr[r+1];
	                               // }
	                                count*=2;
	                            }
	                        }
	                        
	                       cout<<ans<<endl; 
	           }
}