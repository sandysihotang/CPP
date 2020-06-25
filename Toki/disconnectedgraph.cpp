#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5;

int main() {
    int n;
    cin >> n;
    while(n--){
        int N, E, Q, R;
        cin >> N >> E >> Q >> R;
        vector<int>adj[50001];
        unordered_map<int,unordered_map<int,bool>> related;
        vector<pair<int,int>> paired;
        for (int i=0 ; i< E; i++) {
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            related[a][b] = true;
            related[b][a] = true;
            paired.push_back({a,b});
        }
        bool khusus[N + 2];
        memset(khusus, false, sizeof(khusus));
        for(int i=0 ; i<Q ;i++){
            int a;
            cin >> a; khusus[a]=true;
        }
        for(int i=0 ; i<R ; i++){
            int a; cin >> a;
            related[paired[a-1].first][paired[a-1].second] = false;
            related[paired[a-1].second][paired[a-1].first] = false;
        }
        int ans=0;
        unordered_map<int, bool> vis;
        function<void(int)> Dfs = [&] (int x){
            vis[x] = true;
            for(int i:adj[x]){
                if(khusus[i] && khusus[x]){
                    if(related[x][i] == true){
                        related[i][x] = false;
                        ans++;
                    }
                }
                if(!vis[i]){
                    Dfs(i);
                }
            }
        };
        Dfs(paired[0].first);
        cout << Q+((Q*(Q-3))/2) - ans << endl;
    }
    return 0;
}
