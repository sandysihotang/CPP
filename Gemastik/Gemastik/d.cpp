#include<bits/stdc++.h>
using namespace std;
const int maxn = (int) 1e5+7;
vector<vector<int>> dist(maxn);
vector<int> gold(10007);
int n,k;
int ans = 0;
void dfs(int to, unordered_map<int, bool> &vis, int &sum) {
    if(vis[to]) return;
    sum += gold[to];
    ans = max(ans, sum);
    vis[to] = 1;
    for(auto i : dist[to]) {
        if(!vis[i]) {
            dfs(i, vis, sum);
        }
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++)cin >> gold[i];
    for(int i = 0; i < k; i++) {
        int f, t;
        cin >> f >> t;
        dist[f].push_back(t);
    }

    for(int i = 0; i < n; i++) {
        unordered_map<int,bool> vis;
        int sum = 0;
        dfs(i, vis, sum);
    }
    cout << ans << endl;
    return 0;
}
