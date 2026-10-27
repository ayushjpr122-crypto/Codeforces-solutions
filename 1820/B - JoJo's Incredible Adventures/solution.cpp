#include <bits/stdc++.h>
using namespace std;
 
int main() {
            
            int t;
            cin>>t;
            while(t--){
                
                string s;
                cin>>s;
                
                int n = s.size();
                
                bool flag = 1;
                int cnt = 0;
                for(int i=0;i<n;i++){
                    if(s[i] == '1'){
                        flag = 0;
                        cnt++;
                    }
                }
                
                
                if(cnt == n){
                    cout<<1LL*n*n<<endl;
                    continue;
                }
                
                if(flag){
                    cout<<0<<endl;
                    continue;
                }
                
                string temp = s+s;
                
                int count = 0;
                int maxi = 0;
                for(int i=0;i<2*n;i++){
                    if(temp[i] == '1'){
                        count++;
                        maxi = max(maxi,count);
                    }
                    else{
                        count = 0;
                    }
                }
                
                
                
            //    if(n>1 && s[0] == '1' && s[0] == s[n-1])count++;
                
           //     if(count)count++;
                
                long long mx = maxi;
                long long x = maxi+1;
                
                for(int i=1;i<x;i++){
                    long long y = i*(x-i)*1LL;
                    mx = max(mx,y);
                }
                
                cout<<mx<<endl;
               
            }
 
}