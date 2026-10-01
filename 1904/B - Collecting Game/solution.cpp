#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
	           
	           int t;
	           cin>>t;
	           while(t--){
	               int n;
	               cin>>n;
	               vector<pair<ll,ll>>v(n);
	               vector<ll>pf(n+1,0);
	               for(int i=0;i<n;i++){
	                   ll x;
	                   cin>>x;
	                   v[i].first = x;
	                   v[i].second = i;
	               }
	               
	               sort(v.begin(),v.end());
	               
	               for(int i=0;i<n;i++){
	                   pf[i+1] = pf[i] + v[i].first;
	               }
	               
	               vector<long long>result(n);
	               for(int i=0;i<n;i++){
	                   int found = i;
	                   int j = i;
	                   while(j<n){
	                       pair<ll,ll>temp = {pf[j+1]+1,INT_MIN};
	                       int idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
	                       idx--;
	                       if(j==idx)break;
	                       found += (idx-j);
	                       j=idx;
	                   }
	                   result[v[i].second] = found;
	               }
	               
	               for(int i=0;i<n;i++){
	                   cout<<result[i]<<" ";
	               }
	               cout<<endl;
	               
	           }
	        
	           
}