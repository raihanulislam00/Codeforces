#include<bits/stdc++.h>
using namespace std;
#define int long long
bool power(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
    
        if (power(x) || power(x + 1)) {
            cout << -1 << endl;
            continue;
        }
        int p = 1;
        while (p * 2 <= x) {
            p *= 2;
        }
        
        int y = p - 1;
        if (y >= 1 && y < x) {
            int z = x ^ y;
            
            if (y + z > x && x + z > y && x + y > z) {
                cout << y << endl;
                continue;
            }
        }
        
        cout << -1 << endl;
    }
    
    return 0;
}