#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int lp = max(l, -m);
        int rp = lp + m;
        
        if (rp > r) {
            rp = r;
            lp = r - m;
        }
        
        cout << lp << " " << rp << endl;
    }
    return 0;
}