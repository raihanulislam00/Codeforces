#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXK = 100005;
vector<int> divs[MAXK];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 2; i < MAXK; ++i)
        for (int j = i; j < MAXK; j += i)
            divs[j].push_back(i);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }
        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            --l, --r;
            int i = l;
            int ans = 0;
            while (i <= r) {
                if (k == 1) {
                    ans += r - i + 1;
                    break;
                }
                int nxt = r + 1;
                vector<int> ds;
                if (k < MAXK) {
                    ds = divs[k];
                } else {
                    int tmp = k;
                    for (int x = 2; x * x <= tmp; ++x) {
                        if (tmp % x == 0) {
                            ds.push_back(x);
                            while (tmp % x == 0)
                                tmp /= x;
                        }
                    }
                    if (tmp > 1)
                        ds.push_back(tmp);
                }
                for (int d : ds) {
                    if (pos.count(d)) {
                        auto &v = pos[d];
                        auto it = lower_bound(v.begin(), v.end(), i);
                        if (it != v.end() && *it < nxt)
                            nxt = *it;
                    }
                }
                ans += 1LL * (nxt - i) * k;
                if (nxt > r)
                    break;
                while (k % a[nxt] == 0)
                    k /= a[nxt];
                ans += k;
                i = nxt + 1;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}