#include <bits/stdc++.h>
using namespace std;
 
const int N=1e2+10;
int arr[N];
 
int main() {
	        int n;
	        cin>>n;
	        for(int i=0;i<n;i++){
	            cin>>arr[i];
	        }
	        int t;
	        cin>>t;
	        while(t--){
	            int a,b;
	            cin>>a>>b;
	            a--;
	            if(a!=0 && a!=n-1){
	            arr[a-1] +=b-1;
	            arr[a+1] +=(abs(arr[a]-b));
	            arr[a]=0;
	            }
	            else if(a!=n-1){
	                arr[a+1] +=(abs(arr[a]-b));
	                arr[a]=0;
	            }
	            else{
	                arr[a-1] +=b-1;
	                arr[a]=0;
	            }
	            
	            
	        }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<endl;
            }
}