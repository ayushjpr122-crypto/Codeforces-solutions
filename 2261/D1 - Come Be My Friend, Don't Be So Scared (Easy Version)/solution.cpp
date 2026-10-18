#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	        int t;
	        cin>>t;
	        while(t--){
	            int n,m;
	            cin>>n>>m;
                
                if(n==1){
                    cout<<0<<endl;
                    continue;
                }
                	            
	            int a = (n+1)/2;
	            cout<<a<<endl;
	            for(int i=1;i<=a;i++){
	                cout<<i<<" "<<i+a-1<<endl;
	            }
	        }
 
}