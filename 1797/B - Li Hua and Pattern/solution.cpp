#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	       int t;
	       cin>>t;
	       while(t--){
	        int n,k;
	        cin>>n>>k;
	        vector<vector<int>>v(n);
	        
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                int x;
	                cin>>x;
	                v[i].push_back(x);
	            }
	        }
	        
	       // if(n==1){
	       //     cout<<"YES"<<endl;
	       //     continue;
	       // }
	        
	        bool flag = 1;
	        
	        int x1=0,x2=n-1;
	        while(x1<x2){
	        for(int i=0;i<n;i++){
	            if(v[x1][i] != v[x2][n-i-1]){
	                if(k>0){
	                    k--;
	                }
	                else{
	                    flag = 0;
	                    break;
	                }
	            }
	        }
	        x1++;
	        x2--;
	  }
	  
	  if(x1==x2){
	      int l=0;
	      int r = n-1;
	      while(l<r){
	           if(v[x1][l] != v[x2][r]){
	                if(k>0){
	                    k--;
	                }
	                else{
	                    flag = 0;
	                    break;
	                }
	            }
	            l++;
	            r--;
	      }
	  }
	  
	  if(flag && (n%2!=0 || k%2==0))cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
	       
	           
	   }
}