#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	        int t;
	        cin>>t;
	        while(t--){
	            int n;
	            cin>>n;
	            int arr[n];
	            int sum = 0;
	            int od = 0;
	            for(int i=0;i<n;i++){
	                cin>>arr[i];
	                sum += arr[i];
	                if(arr[i]%2 != 0){
	                    od++;
	                }
	            }
	            
	            if(n==1 || sum%2 == 0){
	                cout<<"Moggity"<<endl;
	                continue;
	            }
	            
	            if((n==3 && od == 3) || (n==2 && od == 1)){
	                cout<<"Larpity"<<endl;
	            }
	            else{
	                cout<<"Moggity"<<endl;
	            }
 
	           // if(n%2){
	           //     if(n==3){
	           //         cout<<"Larpity"<<endl;
	           //     }
	           //     else{
	           //         cout<<"Moggity"<<endl;
	           //     }
	           // }
	           // else{
	           //     if(n==2){
	           //         cout<<"Larpity"<<endl;
	           //     }
	           //     else{
	           //         cout<<"Moggity"<<endl;
	           //     }
	           // }
	           
	        }
}