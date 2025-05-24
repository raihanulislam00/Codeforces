#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<pair<int, int>> obs(n);
        for (int i = 0; i < n; i++) {
            cin >> obs[i].first >> obs[i].second;
        }
        
        vector<pair<int, int>> dp(n + 1);
        dp[0] = {0, 0};
        
        bool flag = true;
        
        for (int i = 0; i < n; i++) {
            int l, r;
            
            if (a[i] == 0) {
                l = dp[i].first;
                r = dp[i].second;
            } else if (a[i] == 1) {
                l = dp[i].first + 1;
                r = dp[i].second + 1;
            } else {
                l = dp[i].first;
                r = dp[i].second + 1;
            }
            
            int min1 = max(l, obs[i].first);
            int max1 = min(r, obs[i].second);
            
            if (min1 > max1) {
                flag = false;
                break;
            }
            
            dp[i + 1] = {min1, max1};
        }
        
        if (!flag) {
            cout << -1 << "\n";
            continue;
        }
        
        vector<int> ans(n);
        int h = dp[n].first;
        
        for (int i = n; i >= 1; i--) {
            if (a[i-1] != -1) {
                ans[i-1] = a[i-1];
                h -= a[i-1];
            } else {
                if (h >= dp[i-1].first && h <= dp[i-1].second) {
                    ans[i-1] = 0;
                } else {
                    ans[i-1] = 1;
                    h -= 1;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << ans[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}