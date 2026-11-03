#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	            int t;
	            cin>>t;
	            while(t--){
	                int n;
	                cin>>n;
	                int arr[n];
	                vector<int>o;
	                vector<int>e;
	                long long sum = 0;
	                for(int i=0;i<n;i++){
	                    cin>>arr[i];
	                    if(i%2==0){
	                        e.push_back(arr[i]);
	                    }
	                    else{
	                        o.push_back(arr[i]);
	                    }
	                    sum += arr[i];
	                }
	                
	                sort(o.begin(),o.end());
	                sort(e.begin(),e.end());
	                int m = min(o.size(),e.size());
	                long long sumodd = 0,sumeve = 0;
	                long long best = sum;
	                for(int i=0;i<m;i++){
	                    
	                    sumodd += o[i];
	                    sumeve += e[i];
	                    
	                    
	                    sum = max(sum,best-2*(sumeve + sumodd));
	                    
	                }
	                
	                cout<<sum<<endl;
	                
	            }
 
}