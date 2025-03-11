#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int &num : a) cin >> num;

        int sum = 0;
        for (int num : a) sum += num;

        if (sum == x * n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
