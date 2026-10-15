#include <bits/stdc++.h>
using namespace std;
 
int main() {
            
            int t;
            cin>>t;
            while(t--){
               string s;
               cin>>s;
               int ans = 1;
               int n = s.size();
               int z1=0,z2=0;
               for(int i=1;i<n-1;i++){     
                   if(s[i-1]==s[i] && s[i]==s[i+1]){
                       z1 = 1;
                   }
                   if(s[i-1]!=s[i] && s[i]!=s[i+1]){
                       z2 = 1;
                   }
               }
               
               ans += z1 + z2;
               
               cout<<ans<<endl;
                
            }
 
}