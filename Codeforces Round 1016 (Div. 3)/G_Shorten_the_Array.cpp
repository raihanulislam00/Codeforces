#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int rd = uniform_int_distribution<int>(1e9, 2e9)(rng);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        if (k == 0) {
            cout << 1 << '\n';
            continue;
        }

        int ans = 1e9;
        int tar = 0;

        for (int bit = 29; bit >= 0; --bit) {
            if ((k >> bit) & 1) {
                tar ^= (1 << bit);
            } else {
                tar ^= (1 << bit);
                unordered_map<int, int> d;
                for (int i = 0; i < n; ++i) {
                    int v = (a[i] >> bit) << bit;
                    if (d.count((v ^ tar) ^ rd)) {
                        ans = min(ans, i - d[(v ^ tar) ^ rd] + 1);
                    }
                    d[v ^ rd] = i;
                }
                tar ^= (1 << bit);
            }

            if (bit == 0) {
                tar = k;
                unordered_map<int, int> d;
                for (int i = 0; i < n; ++i) {
                    if (d.count((a[i] ^ tar) ^ rd)) {
                        ans = min(ans, i - d[(a[i] ^ tar) ^ rd] + 1);
                    }
                    d[a[i] ^ rd] = i;
                }
                tar ^= (1 << bit);
            }
        }

        if (ans != 1e9)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}