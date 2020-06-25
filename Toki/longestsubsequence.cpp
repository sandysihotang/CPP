#include<bits/stdc++.h>
using namespace std;
void test_case(){
    string n;
    cin >> n;
    int dp[50+1][50+1];
    for(int i=0 ; i< n.length(); i++){
        dp[i][i] = 1;
    }
    for(int k=1 ; k < n.length() ; k++){
        for(int i =0 ; i < n.length()-k ; i++){
            int j = i+k;
            if(n[i] == n[j]){
                dp[i][j] = 2 + dp[i+1][j-1];
            } else {
                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
            }
        }
    }
    cout << dp[0][n.length()-1] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}

