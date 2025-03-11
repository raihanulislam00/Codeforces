#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> x(n);
        vector<int> r(n);
        
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }
        
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            int rad = r[i];
            int cx = x[i];
            
            for (int curr = cx - rad; curr <= cx + rad; curr++) {
                int dx = abs(curr - cx);
                int y = floor(sqrt(1.0 * rad * rad - dx * dx));
                
                mp[curr] = max(mp[curr], y);
            }
        }
        
        int total = 0;
        for (const auto& [x, y] : mp) {
            total += 2 * y + 1;
        }
        
        cout << total << endl;
    }
    
    return 0;
}