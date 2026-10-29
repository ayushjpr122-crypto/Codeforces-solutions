#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	        int t;
	        cin>>t;
	        while(t--){
	            int n,m;
	            cin>>n>>m;
	            int arr[n];
	         //   int mn = INT_MAX;
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	              //  mn = min(mn,arr[i]);
	            }
	            
	            vector<vector<int>>v(n);
	           for(int i=0;i<n;i++){
	                for(int j=0;j<m;j++){
	                    int x;
	                    cin>>x;
	                    v[i].push_back(x);
	                }
	           }
	           
	           
	           multiset<int>st;
	           int ans = m;
	   for(int j=n-1;j>=0;j--){
	            
	           for(int i=0;i<m;i++){
	               st.insert(v[j][i]);
	           }
	           
	           vector<int>temp;
	           
	           auto it = st.rbegin();
	           
	           for(int j=0;j<m;j++){
	               temp.push_back(*it);
	               it++;
	           }
	           
	           
	           
	        //   vector<int>v1(st.begin(),st.end());
	           long long sum = 0;
	            int ct = 0;
                for(int x:temp){
                    sum+=x;
                    ct++;
                    if(sum>=arr[j]){
                        break;
                    }
                }
                if(sum>=arr[j]){
                    ans = min(ans,ct);
                }
	            
	   }
	            
	            cout<<ans<<endl;
	            
	            
	            
	            
	        }
 
}