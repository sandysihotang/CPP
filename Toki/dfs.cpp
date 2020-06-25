#include<bits/stdc++.h>
using namespace std;
    vector<int>adj[(int)3e5 + 5];
    bool vis[(int)3e5 + 5];
    int cnt =0;
    void dfs(int x){
        vis[x] = true;
        for(int i : adj[x]){
            if(!vis[i]){
              cnt++;
              dfs(i);
            }
        }
    }


int main() {
    int n,u,v;
    cin >> n >> u >> v;
    vis[u]=true;
    vis[v]= true;
    for(int i=0; i<n-1;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(u);
    int cntX=cnt;
    cnt =0;
    int cntY = cnt;
    cout << n*(n-1)-cntX*cntY << endl;
    return 0;
}
