#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
	       int t;
	       cin>>t;
	       while(t--){
	           int n,q;
	           cin>>n>>q;
	           int arr1[n],arr2[q];
	           for(int i=0;i<n;i++){
	               cin>>arr1[i];
	           }
	         //  unordered_map<int,int>mp1;
	           for(int i=0;i<q;i++){
	               cin>>arr2[i];
	             //  mp1[arr2[i]]++;
	           }
	           
	           int last = 31;
	           for(int i=0;i<q;i++){
	               
	                if(arr2[i]>=last)continue;
	               
	                 int x = pow(2,arr2[i]);
	               
	               for(int j=0;j<n;j++){
	                   if(arr1[j]%x == 0){
	                        int y = pow(2,arr2[i]-1);
	                        arr1[j] += y;
	                   }
	               }
	               
	               last = arr2[i];
	           }
	           
	           for(int i=0;i<n;i++){
	               cout<<arr1[i]<<" ";
	           }
	           cout<<endl;
	           
	       }
}