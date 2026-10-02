#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                long long arr[n];
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
	                
	                long long god = 0;
	                long long gev = 0;
	                
	                
	                for(int i=0;i<n;i++){
	                    if(i%2 == 0){
	                        gev = gcd(gev,arr[i]);
	                    }
	                    else{
	                        god = gcd(god,arr[i]);
	                    }
	                }
	                
	                long long mx1 = gev;
	                 long long mx2 = god;
	                
	                bool flag1 = 1;
	                for(int i=0;i<n-1;i++){
	       if((arr[i]%mx1 == 0 && arr[i+1]%mx1 == 0) || (arr[i]%mx1!=0 && arr[i+1]%mx1!=0)){
	                        flag1 = 0;
	                        break;
	                    }
	                }
	                bool flag2 = 1;
	                for(int i=0;i<n-1;i++){
	       if((arr[i]%mx2 == 0 && arr[i+1]%mx2 == 0) || (arr[i]%mx2!=0 && arr[i+1]%mx2!=0)){
	                        flag2 = 0;
	                        break;
	                    }
	                }
	                
	                if(flag1)cout<<mx1<<endl;
	                else if(flag2)cout<<mx2<<endl;
	                else cout<<0<<endl;
	                
	            }
 
}