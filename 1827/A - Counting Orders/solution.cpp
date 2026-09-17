#include <bits/stdc++.h>
using namespace std;
 
const int M = 1e9+7;
 
int main() {
	            
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                vector<int>arr(n);
	                vector<int>brr(n);
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
	                for(int i=0;i<n;i++){
	                    cin>>brr[i];
	                }
	                
	                sort(arr.begin(),arr.end());
	                sort(brr.begin(),brr.end());
	                
	                int removal = 0;
	                long long ans = 1;
	                for(int i=n-1;i>=0;i--){
	                    auto it  = upper_bound(arr.begin(), arr.end(), brr[i]);
	                    int ind = arr.end()-it;
	                    ans=(ans*(ind-removal))%M;
	                    removal++;
	                }
	                
	                cout<<ans%M<<endl;
	                
	            }
 
}