#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> g(n + 1, vector<int>(n + 1));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> g[i][j];
        
        vector<int> p(2 * n + 1);
        for (int j = 1; j <= n; j++)
            p[1 + j] = g[1][j];
        
        for (int i = 2; i <= n; i++)
            p[n + i] = g[i][n];
        
        vector<bool> u(2 * n + 1, false);
        for (int i = 2; i <= 2 * n; i++)
            u[p[i]] = true;
        
        for (int i = 1; i <= 2 * n; i++)
            if (!u[i]) {
                p[1] = i;
                break;
            }
        
        for (int i = 1; i <= 2 * n; i++)
            cout << p[i] << " ";
        cout << endl;
    }
    
    return 0;
}