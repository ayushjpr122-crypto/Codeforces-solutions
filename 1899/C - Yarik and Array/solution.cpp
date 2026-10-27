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
                
                long long sum = 0;
                long long mx = INT_MIN;
                for(int i=0;i<n;i++){
                    if(sum<0){
                        sum = 0;
                    }
                    if(i && (arr[i-1]&1)==(arr[i]&1)){
                        sum = 0;
                    }
                    sum += arr[i];
                    mx = max(mx,sum);
                }
                
                
                cout<<mx<<endl;
                
                
            }
 
}