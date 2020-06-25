#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int a,b,a1,b1;
        int dp[2001];
        for(int j=0 ; j<2001 ; j++)dp[j]=1;
        cin>>a>>b;
        vector<int>has1,has2;
        for(int j=0 ; j<a ; j++){
            cin>>a1;has1.push_back(a1);
        }
        sort(has1.begin(),has1.end());
        for(int j=0 ; j<b ; j++){
            cin>>b1;has2.push_back(b1);
        }
        for(int j= 0 ; j < has1.size() ; j++){
            for(int l=1 ; l<has2.size() ; l++){
                if(has2[l]-has1[j]>=0){
                    dp[has2[l]]=min(dp[has2[l]-has1[j]]+1,dp[has2[l]]);
                }
            }
        }
        cout<<dp[has2[has2.size()-1]]<<endl;
    }
    return 0;
}
