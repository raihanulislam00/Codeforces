#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        vector<pair<int, int>> p = {{-l, 0}, {r, 0}, {0, -d}, {0, u}};
        vector<int> dist;
        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                int dx = p[i].first - p[j].first;
                int dy = p[i].second - p[j].second;
                dist.push_back(dx * dx + dy * dy);
            }
        }
        sort(dist.begin(), dist.end());
        if (dist[0] > 0 && dist[0] == dist[1] && dist[1] == dist[2] && dist[2] == dist[3] && dist[4] == dist[5]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}