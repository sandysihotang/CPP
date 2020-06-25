#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const N=2*1e5+7;
int data[N],temp[N];
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n ; i++){
        cin>>data[i];
    }
    ll ans=data[n];
    for(int i=n-1 ; i>0 ; i--){
        if(data[i]>=data[i+1]){
            data[i]=max(data[i+1]-1,0);
        }
        ans+=data[i];
    }
    cout << ans << endl;
    return 0;
}
