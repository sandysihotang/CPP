#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    ll a,b,k;
    while(t--){
        cin>>a>>b>>k;
        ll temp;
        if(k%2==1){
            cout<<(a*((k/2)+1))-(b*(k/2))<<endl;
        }
        else{
            cout<<(a*(k/2))-(b*(k/2))<<endl;
        }
    }
    return 0;
}
