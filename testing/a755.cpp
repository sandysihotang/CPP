#include<bits/stdc++.h>
using namespace std;
unordered_map<int ,bool>prime,isprime;
int main()
{
    int n;
    cin >> n;
    for(int i=2 ; i<n*1000+2 ; i++){
        if(!prime[i]){
            isprime[i]=true;
            for(int j=i ; j<n*1000+2 ; j+=i)prime[j]=true;
        }
    }
    for(int i=1 ; i<1000+2 ; i++){
        if(!isprime[n*i+1]){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
