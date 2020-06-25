#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
int main(){
    long long m,r,s;
    cin >> m >> r >> s;
    int x[m];
    long long res=0;
    for (int i=0 ; i<m ; i++)cin>>x[i];
    for (int i=0 ; i<m ; i++)for (int j=i+1 ; j<m ; j++){
        if(abs(x[i]+x[j])==r && abs(x[i]-x[j])==s)res++;
    }
    cout << res%MOD << endl;
    return 0;
}
