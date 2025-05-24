#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int elem1 = a[0];
        int elem2 = a.back();
        if ((elem1 + elem2) % 2 == 0) {
            cout << 0 << '\n';
            continue;
        }
        int f = -1, l = -1;
        int f1 = -1, l1 = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                if (f == -1) f = i;
                l = i;
            } else {
                if (f1 == -1) f1 = i;
                l1 = i;
            }
        }
        int ans = 0;
        if (f != -1 && l != -1) {
            ans = max(ans, l - f + 1);
        }
        if (f1 != -1 && l1 != -1) {
            ans = max(ans, l1 - f1 + 1);
        }
        cout << n - ans << '\n';
    }
    return 0;
}