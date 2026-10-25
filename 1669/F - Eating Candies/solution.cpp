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
	            
	            int suml = arr[0],sumr=arr[n-1];
	            int l = 0,r = n-1;
	            int count = 0;
	            int c1=1,c2=1;
	            while(l<r){
	                if(suml == sumr){
	                    count = max(count,c1+c2);
	                    l++;
	                    r--;
	                    suml+=arr[l];
	                    sumr+=arr[r];
	                     c1++;
	                     c2++;
	                }
	                else if(suml<sumr){
	                    l++;
	                    suml+=arr[l];
	                    c1++;
	                }
	                else{
	                    r--;
	                    sumr+=arr[r];
	                    c2++;
	                }
	            }
	            
	            cout<<count<<endl;
	            
	            
	        }
 
}