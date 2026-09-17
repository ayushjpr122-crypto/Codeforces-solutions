#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        for (int k = 2; k <= 30; k++) {
            long long val = pow(2,k) - 1;  // 2^k - 1
 
            if (n % val == 0) {
                cout << n / val << endl;
                break;
            }
        }
    }
}