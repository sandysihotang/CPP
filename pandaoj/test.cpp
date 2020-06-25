#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<ll,bool>data,prime;
void gen(ll r)
{
    for(ll i=2 ; i<pow(r,2) ; i++){
        if(!data[i]){
            prime[i]=true;
            cout<<i<<" ";
            for(ll j =i ; j<pow(r,2) ; j+=i){
                data[j]=true;
            }
        }
    }cout<<endl;
}

int main(){
    ll d;
    cin>>d;
    gen(d);
    int sum=0;
    for(ll i=sqrt(d) ; pow(i,2)<pow(d,2) ; i++){
        if(!prime[pow(i,2)] && pow(i,2)<pow(d,2) && pow(i,2)>d){
            sum++;
            cout<<pow(i,2)<<" ";
        }
    }
    cout<<endl;
    return 0;
}
