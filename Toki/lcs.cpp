#include<bits/stdc++.h>
using namespace std;
int lcs(string left, string right){
    int n = left.length(), m = right.length();
    vector<vector<int>> dp(n+1, vector<int> (m+1));
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(left[i] == right[j]){
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];

}

int main() {
    string a,b;
    cin >> a >> b;
    cout << lcs(a,b) << endl;
    return 0;
}
