#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<long long> b(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        
        vector<vector<pair<int, long long>>> adj(n + 1);
        long long maxW = 0;
        
        for(int i = 0; i < m; i++){
            int s, t;
            long long w;
            cin >> s >> t >> w;
            adj[s].push_back({t, w});
            maxW = max(maxW, w);
        }
        
        auto check = [&](long long mid) -> bool {
            vector<long long> dist(n + 1, -1);
            deque<int> dq;
            
            dist[1] = min(mid, b[1]);
            dq.push_back(1);
            
            while(!dq.empty()){
                int u = dq.front();
                dq.pop_front();
                
                for(auto [v, w] : adj[u]){
                    if(w > mid || dist[u] < w) continue;
                    
                    long long newDist = min(mid, dist[u] + b[v]);
                    
                    if(dist[v] < newDist){
                        dist[v] = newDist;
                        
                        if(w == dist[u]){
                            dq.push_front(v);
                        } else {
                            dq.push_back(v);
                        }
                    }
                }
            }
            
            return dist[n] >= 0;
        };
        
        long long left = 0, right = maxW + b[n];
        long long ans = -1;
        
        while(left <= right){
            long long mid = left + (right - left) / 2;
            
            if(check(mid)){
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}