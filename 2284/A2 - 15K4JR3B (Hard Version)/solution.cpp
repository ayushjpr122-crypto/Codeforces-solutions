#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    int t;
	    cin>>t;
	    while(t--){
	        int n;
	        cin>>n;
	        int arr[n];
	        long long tt = 0;
	        for(int i=0;i<n;i++){
	            cin>>arr[i];
	            arr[i] = (1<<arr[i]);
	            tt += arr[i];
	        }
	        
	        sort(arr,arr+n);
	       
	        
	        long long sum = 0;; 
	        for(int i=n-1;i>=0;i--){
	            if(arr[i] + sum <= tt/2){
	                sum += arr[i];
	            }
	       }
	        
	        cout<<(tt-sum)*sum<<endl;    
	    }
}