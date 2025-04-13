#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool ok = true;

        while (i < p.size() && j < s.size()) {
            char c = p[i];
            if (s[j] != c) {
                ok = false;
                break;
            }

            int a = 0;
            while (i < p.size() && p[i] == c) {
                a++;
                i++;
            }

            int b = 0;
            while (j < s.size() && s[j] == c) {
                b++;
                j++;
            }

            if (b < a || b > 2 * a) {
                ok = false;
                break;
            }
        }

        if (i != p.size() || j != s.size()) ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}