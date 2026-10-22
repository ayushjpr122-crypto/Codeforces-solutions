#include <bits/stdc++.h>
using namespace std;
 
int main() {
	        
	         string s;
	        cin>>s;
	        int count = 0;
	        //int idx = 0;
	        for(int i=0;i<s.size();i++){
	            if(s[i]=='4'){
	                count = 2*count + 1;
	            }
	            else{
	                count = 2*count+2;
	            }
	        }
	        
	        cout<<count<<endl;
 
}