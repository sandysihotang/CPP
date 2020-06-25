#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    int n;
    cin >> n;
    vector<int>cc;
    for(int i=0 ; i<n ; i++){
        int a,b,k;
        cin >> a >> b >> k;
        int can=INT_MAX;
        for(int j=a ; j<=b ; j++){
            if(j%k==0){
                can=j;
                break;
            }
        }
        int ans=0;
        while(can<=b){
            ans++;
            can+=k;
        }
        cc.push_back(ans);
    }
    for(int i=0 ; i<cc.size() ; i++)
        cout << "Case " << i+1 << ": " << cc[i] << endl;
    return 0;
}

