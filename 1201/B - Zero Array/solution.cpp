#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	            int n;
	            cin>>n;
	            int arr[n];
	            long long sum = 0;
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	                sum += arr[i];
	            }
	            
	            
	            sort(arr,arr+n);
	            
	            if(sum%2 == 0 && sum>=2*arr[n-1]){
	                cout<<"YES"<<endl;
	            }
	            else{
	                cout<<"NO"<<endl;
	            }
	           
}