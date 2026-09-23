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
	            map<char,int>mp;
	            int ans = 0;
	            for(int i=0;i<n;i++){
	                mp[s[i]]++;
	                ans += mp.size();
	            }
	            
	            cout<<ans<<endl;
	        }
 
}