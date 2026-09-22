#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> cnt(m + 1, 0);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            cnt[a]++;
        }
        vector<int> suffix(m + 2, 0);
        for (int x = m; x >= 1; x--) {
            suffix[x] = suffix[x + 1] + cnt[x];
        }
        int ans = 0;
        for (int x = 1; x <= m; x++) {
            int cur = suffix[x];
            if (2 * x <= m) {
                cur += cnt[2 * x];
            }
 
            ans = max(ans, cur);
        }
 
        cout << ans << '
';
    }
    return 0;
}