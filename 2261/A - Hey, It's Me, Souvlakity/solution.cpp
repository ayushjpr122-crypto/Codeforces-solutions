#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                string s;
	                cin>>s;
	               // for(int i=0;i<n;i++){
	               //     cin>>arr[i];
	               // }
	                
	                int l=0,f = 0;
	                for(int i=0;i<n;i++){
	                    if(s[i] == '1'){
	                        f = i;
	                        break;
	                    }
	                }
	                int cnt = 0;
	                for(int i=0;i<n;i++){
	                    if(s[i] == '1'){
	                        l = i;
	                         cnt++;
	                    }
	                }
	                
	                if(cnt == 2){
	                    cout<<1<<endl;
	                }
	                else{
	                cout<<l-f<<endl;
	                }
	            }
 
}