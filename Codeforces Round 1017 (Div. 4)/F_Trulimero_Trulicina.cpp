#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        int c = (m % k) ? (m % k) : 1;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int val = ((j + c * i) % k) + 1;
                cout << val << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}