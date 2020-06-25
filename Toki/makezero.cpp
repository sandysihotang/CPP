#include<bits/stdc++.h>
using namespace std;
class Solution {
    unordered_map<int, unordered_map<int,bool>> vis;
    int n,m;
    vector<pair<int, int>> cnt = {{1,0}, {0,1}, {-1,0}, {0,-1}};
    void dfs(vector<vector<int>>& matrix, int i_from, int i_to,int j_from, int j_to) {
        if(vis[i_from][j_from] || i_from == n || j_from == m || i_from < 0 || j_from < 0) return;
        if(matrix[i_from][j_from] != 0){
            matrix[i_from][j_from]=0;
            vis[i_from][j_from] = true;
            dfs(matrix, i_from+i_to, i_to, j_from+j_to, j_to);
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return;
        n = matrix.size() ;
        m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && matrix[i][j]==0) {
                    for(auto &k : cnt){
                        dfs(matrix, i+k.first, k.first, j+k.second, k.second);
                    }
                }
            }
        }
    }
};
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> d(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> d[i][m];
        }
    }
    Solution sol;
    sol.setZeroes(d);
    return 0;
}
/*
3 3
1 2 3
0 1 2
1 2 3
*/
