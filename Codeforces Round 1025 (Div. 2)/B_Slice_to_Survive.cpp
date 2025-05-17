#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        
        int x = min(a, n - a + 1);
        int y = min(b, m - b + 1);
        
        int s1 = 1 + (n <= 1 ? 0 : 64 - __builtin_clzll(n - 1)) + (y <= 1 ? 0 : 64 - __builtin_clzll(y - 1));
        int s2 = 1 + (m <= 1 ? 0 : 64 - __builtin_clzll(m - 1)) + (x <= 1 ? 0 : 64 - __builtin_clzll(x - 1));
        
        cout << min(s1, s2) << '\n';
    }
    
    return 0;
}
