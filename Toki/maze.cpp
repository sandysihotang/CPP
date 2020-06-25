#include<bits/stdc++.h>
using namespace std;
int kotaawal,kotaakhir;
const int maxn = 100000;
vector<int>adj[maxn];
bool v[maxn];
vector<int> d;
void dfs(int x){
    v[x]=true;
    d.push_back(x);
    for(int i: adj[x]){
        if(!v[i]){
            dfs(i);
        }
    }
}
int main() {
    int n,l,t;
    cin >> n >> l >> t >> kotaawal >> kotaakhir;
    for(int i=0; i<l ; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(b);
    }
    for(int i=0 ; i<t ; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(b);
    }
    dfs(kotaawal);
    for(int i=0 ; i<d.size(); i++){
        cout << d[i] << endl;
    }
    return 0;
}
