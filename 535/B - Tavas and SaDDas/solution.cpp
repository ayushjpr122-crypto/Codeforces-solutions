#include <bits/stdc++.h>
using namespace std;
 
 
// bitmaks solution
int main() {
	        string s;
	        cin>>s;
	        int x = s.size();
	        int mask_value = 0;
	        for(int i=0;i<s.size();i++){
	            if(s[i] == '4'){
	                mask_value = 2*mask_value + 0;
	            }
	            else{
	                mask_value = 2*mask_value + 1;
	            }
	        }
	        
	        int indx = (1<<x) - 1 + mask_value;
	        
	        cout<<indx<<endl;
}