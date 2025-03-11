#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 3) {
            cout << "! 1 2 3" << endl;
            continue;
        }
        
        int a = 1, b = 2, c = 3;
        int cycle = 0; 
        
        while (true) {
            cout << "? " << a << " " << b << " " << c << endl;
            int p;
            cin >> p;
            
            if (p == 0) {
                cout << "! " << a << " " << b << " " << c << endl;
                break;
            }
            
            cout << "? " << p << " " << b << " " << c << endl;
            int c1;
            cin >> c1;
            
            if (c1 == 0) {
                cout << "! " << p << " " << b << " " << c << endl;
                break;
            }
            
            cout << "? " << a << " " << p << " " << c << endl;
            int c2;
            cin >> c2;
            
            if (c2 == 0) {
                cout << "! " << a << " " << p << " " << c << endl;
                break;
            }
            
            cout << "? " << a << " " << b << " " << p << endl;
            int c3;
            cin >> c3;
            
            if (c3 == 0) {
                cout << "! " << a << " " << b << " " << p << endl;
                break;
            }
            
            cycle = (cycle + 1) % 3;
            
            if (cycle == 0) {
                a = p;
                p = c1;
            } else if (cycle == 1) {
                b = p;
                p = c2;
            } else {
                c = p;
                p = c3;
            }
        }
    }
    
    return 0;
}