#include <bits/stdc++.h>
using namespace std;
 
int main() {
            
                int t;
                cin>>t;
                while(t--){
                    int n;
                    cin>>n;
                    int arr[n];
                    int mn = INT_MAX;
                    for(int i=0;i<n;i++){
                        cin>>arr[i];
                        mn = min(mn,arr[i]);
                    }
                    
                    if(mn == 0){
                        cout<<n<<endl;
                    }
                    else if(mn>=n){
                        cout<<0<<endl;
                    }
                    else{
                        cout<<n<<endl;
                    }
                    
                }
 
}