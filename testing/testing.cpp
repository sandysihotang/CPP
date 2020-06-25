#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MOD=100;
int cek(LL num){
    int ret=1;
    for(LL i=2;i<=num;i++){
        bool B=false;
        for(LL j=2;j<i;j++){
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
    LL n;
    cin >> n;
    for(int i=0 ; i<=n ; i++){
        int ans=0;
        for(LL j=1 ; j<=i;j++){
            if(cek(j)){
                ans+=j%MOD;ans%=MOD;
            }
        }
        cout << i << " " << ans << endl;
    }
    return 0;
}
