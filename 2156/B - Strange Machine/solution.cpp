#include <bits/stdc++.h>
using namespace std;
 
const int N=1e5+10;
int hsh[N];
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        string s;
        cin >> s;
        for(int i = 0; i < N; i++) {
            hsh[i] = 0;
        }       
        for(int i=0;i<n;i++){
            hsh[s[i]]++;
        }
 
        while (q--) {
            long long a;
            cin >> a;
 
            // Case 1: all A
            if (hsh['B']==0) {
                cout << a << "
";
                continue;
            }
 
            // Case 2: at least one B
            long long ct = 0;
 
            while (a > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == 'A') {
                        a--;
                    } else {
                        a /= 2;
                    }
                    ct++;
                    if (a == 0) break;
                }
            }
 
            cout << ct << "
";
        }
    }
    return 0;
}