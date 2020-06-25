#include<bits/stdc++.h>
using namespace std;
typedef long long int1;
unordered_map<int1,bool>data;
vector<int1>prime;
void gen()
{
    prime.push_back(1);
    for(int1 i=2 ; i<=1000000 ; i++){
        if(!data[i]){
            prime.push_back(i);
            for(int1 j=i ; j<=1000000 ; j+=i)data[j]=true;
        }
    }
}
int main()
{
    gen();
    int1 r;
    cin>>r;
    int1 e;
    while(r--){
        cin>>e;
        cout<<prime[e]<<endl;
    }
    return 0;
}
