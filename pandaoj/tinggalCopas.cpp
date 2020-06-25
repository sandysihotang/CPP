#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=100;
int cek(ll num){
    int ret=1;
    for(ll i=2;i<=num;i++){
        bool B=false;
        for(ll j=2;j<i;j++){
            if(i%j==0){
                B=true;break;
            }
        }
        if(!B){
            int temp=1;
            while(num%i==0){
                num/=i;temp++;
            }
            ret*=temp;
        }
    }
    return (ret&1);
}
int main()
{
    ll n;cin >> n;
    for(int j= 1 ; j<=n;j++){
        int ans=0;
        for(ll i=1; i<=j;i++){
            if(cek(i)){
                ans+=i%MOD;ans%=MOD;
            }
        }
        cout << j << " " << ans << endl;
    }
    return 0;
}
