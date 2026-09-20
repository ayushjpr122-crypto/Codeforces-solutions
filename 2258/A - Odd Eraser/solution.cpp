#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                int arr[n];
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                }
	                
	                int l=0;
	                int r=n-1;
	                int g = gcd(arr[l],arr[r]);
	                int mx = g;
	                while(l<r){
	                    l++;
	                    g = gcd(arr[l],g);
	                    mx = max(mx,g);
	                    r--;
	                    g = gcd(arr[r],g);
	                    mx = max(mx,g);
	                }
	                
	                cout<<mx<<endl;
	                
	            }
 
}