#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	        int t;
	        cin>>t;
	        while(t--){
	            int n,k;
	            cin>>n>>k;
	            int arr[n];
	            map<int,int>mp;
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	                mp[arr[i]]++;
	            }
	            
	            bool flag = 0;
	            for(int i=0;i<n;i++){
	                if(mp[arr[i]-k]){
	                    flag = 1;
	                    break;
	                }
	            }
	            
	            //changes
	            if(flag){
	                cout<<"YES"<<endl;
	            }
	            else{
	                cout<<"NO"<<endl;
	            }
	            
	            
	        }
 
}