#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>pengali;
    for(int i=0 ; pow(2,i)<=n; i++){
        pengali.push_back(pow(2,i));
    }
    reverse(pengali.begin(),pengali.end());
    vector<int>boolean;
    for(int i=0 ; i<pengali.size() ; i++){
        if(n>=pengali[i]){
            boolean.push_back(1);
            n-=pengali[i];
            continue;
        }
        boolean.push_back(0);
    }
    for(int i: boolean){
        cout<<i;
    }
    cout<<endl;
    return 0;
}
