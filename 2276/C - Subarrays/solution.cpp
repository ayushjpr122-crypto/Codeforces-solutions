#include <bits/stdc++.h>
using namespace std;
 
int main() {
            
            int t;
            cin>>t;
            while(t--){
                int n,k;
                cin>>n>>k;
                int arr[n];
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                
                std::vector<long long>pf(n+1,0);
                for(int i=0;i<n;i++){
                    pf[i+1] = pf[i] + arr[i];
                }
                long long count = 0;
                vector<int>freq(k+1,0);
                for(int j=0;j<n+1;j++){
                    
                    if(j-k-1>=0){   // j - i < k -> j-k - 1 <= i
                        int i = j - k - 1;
                        
                        int rem = pf[i]%k;
                        freq[rem]++;
                    }
                    
                    int rem = pf[j]%k;
                    count += freq[rem];
                }
                
                cout<<count<<endl;
                
            }
 
}