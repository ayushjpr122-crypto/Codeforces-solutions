#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    int t;
	    cin>>t;
	    while(t--){
	        int n;
	        cin>>n;
	       // int arr[n];
	       // for(int i=0;i<n;i++){
	       //     cin>>arr[i];
	       // }
	        
	        long long l = 0,b = 0;
	        
	    //    sort(arr,arr+n);
	        
	        std::vector<int>pref(n+1,0);
	        
	        for(int i=0;i<n;i++){
	            pref[i+1] = pref[i] + 1;
	        }
	        
	        std::vector<int>pref1(n+1,0);
	        
	        pref1[n] = 1;
	        
	        for(int i=n-1;i>0;i--){
	            pref1[i] = pref1[i+1] + 1;
	        }
	        
	        long long ans = 0; 
	        for(int i=1;i<n;i++){
	            ans = max(ans,pref[i]*pref1[i+1]*1LL);
	       }
	        
	        cout<<ans<<endl;
	    }
}