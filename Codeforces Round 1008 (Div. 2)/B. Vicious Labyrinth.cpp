#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        int k;
        cin >> n >> k;
        
        vector<int> v(n + 1);
        
        v[n-1] = n;
        v[n] = n-1;
        
        int b;
        if (k % 2 == 1) {
            b = n;
        } else {
            b = n-1;
        }
        for (int i = 1; i < n-1; i++) {
            v[i] = b;
        }
        for (int i = 1; i <= n; i++) {
            cout << v[i] << (i < n ? " " : "\n");
        }
    }
    
    return 0;
}