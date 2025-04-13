#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<vector<int>> c(30, vector<int>(2, 0));
        for (int i = 0; i < n; i++)
            for (int b = 0; b < 30; b++)
                c[b][(a[i] >> b) & 1]++;
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int b = 0; b < 30; b++) {
                int x = (a[i] >> b) & 1;
                int y = x ? c[b][0] : c[b][1];
                s += (1LL << b) * y;
            }
            ans = max(ans, s);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}