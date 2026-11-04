#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    
	            int t;
	            cin>>t;
	            while(t--){
	                int l,r;
	                cin>>l>>r;
	                
	                if(l==r){
	                    cout<<0<<endl;
	                     continue;
	                }
	                
	                long long sum = 0;
	                for(int i=l;i<r+1;i++){
	                    sum += i;
	                }
	                
	                 if(sum == 0){
	                        cout<<0<<endl;
	                        continue;
	                    }
	                
	                if(sum<0){
	                    int count = 0;
	                    while(sum!=0 && l<=r){
	                        sum = sum - l;
	                        l++;
	                        count++;
	                    }
	                    if(sum!=0){
	                        cout<<1<<endl;
	                    }
	                    else{
	                        cout<<count-1<<endl;
	                    }
	                }
	                
	                else{
	                    int count = 0;
	                    while(sum!=0 && r>=l){
	                        sum = sum - r;
	                        r--;
	                        count++;
	                    }
	                     if(sum!=0){
	                        cout<<1<<endl;
	                    }
	                    else{
	                        cout<<count-1<<endl;
	                    }
	                }
	                
	            }
 
}