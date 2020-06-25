#include<bits/stdc++.h>
using namespace std;
const int maxn = 300;

bool vis[maxn];

char best_place;
void dfs(vector<vector<char>> adj, char f, string res){
    vis[(int)f]=true;
    for(char i : adj[(int)f]){
        if(best_place == i){
            cout << res << "-" << i << endl;
            return;
        }
        if(!vis[int(i)]){
            dfs(adj,i,res+"-"+i);
        }
    }
}
int main() {
    int N, R;
    string T;
    cin >> N >> R >> T;
    string s;
    cin.ignore();
    getline(cin,s);
    int popular=INT_MIN;
    for(int i=0 ; i<N-1 ; i++){
        char place;
        string name;
        int pol;
        cin >> place >> name >> pol;
        if(pol>popular && name == T){
            best_place = place;
            popular = pol;
        }
    }
    vector<vector<char>>adj(maxn, vector<char>(0));
    char from;
    for(int i=0; i<R ; i++){
        char f,t;
        cin >> f >> t;
        if(i==0)from = f;
        adj[(int)f].push_back(t);
        adj[(int)t].push_back(f);
    }
    string j = "";
    j+=from;
    dfs(adj,from,j);
    return 0;
}
