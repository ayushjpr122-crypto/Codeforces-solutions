#include <bits/stdc++.h>
using namespace std;
 
int main() {
	            
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                char c;
	                cin>>n>>c;
	                string s;
	                cin>>s;
	                
	           
	                bool odd = 1;
	                for(int i=0;i<n;i++){
	                    if(s[i]!=c){
	                        odd = 0;
	                    }
	                }
	                
	                if(odd){
	                    cout<<0<<endl;
	                    continue;
	                }
	                
	                else{
	                    bool f = 0;
	                for(int i=n/2+1;i<=n;i++){
	                    if(s[i-1] == c){
	                        f = 1;
	                        int x = i;
	                        cout<<1<<endl;
	                        cout<<x<<endl;
	                        break;
	                    }
	                }
	                
	                   if(!f){
	                   cout<<2<<endl;
	                   cout<<n-1<<" "<<n<<endl;
	                   }
	               } 
	            }
 
}