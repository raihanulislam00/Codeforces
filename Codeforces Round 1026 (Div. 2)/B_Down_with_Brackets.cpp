#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        
        int tamp = 0;
        bool flag = false;
        
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '(') {
                tamp++;
            } else {
                tamp--;
            }
            
            if (tamp == 0) {
                flag = true;
                break;
            }
        }
        
        cout << (flag ? "YES" : "NO") << "\n";
    }
    
    return 0;
}