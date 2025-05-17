#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int temp1 = 0;
        int temp2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                temp2++;
            }
        }
        
        temp1 = n - 1;
        
        if (temp2 > temp1) {
            cout << "YES" << endl;
        } else {
            bool flag = false;
            int ok = 0;
            
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {
                    ok++;
                    if (ok > 1) {
                        flag = true;
                        break;
                    }
                } else {
                    ok = 0;
                }
            }
            
            if (n == 2 && a[0] == 1 && a[1] == 1) {
                flag = true;
            }
            
            cout << (flag ? "YES" : "NO") << endl;
        }
    }
    
    return 0;
}