#include<bits/stdc++.h>
using namespace std;
#define int1 long long
unordered_map<int1,bool>has;
vector<int1>prime;
void gen(int1 r){
    for(int1 i=2 ; i<=r; i++){
        if(!has[i]){
            prime.push_back(i);
            for(int1 j=i ; j<=r ; j+=i){
                    has[j]=true;
            }
        }
    }
}
unordered_map<int1,int>hasi,wek;
int main(){
    int1 r;
    cin>>r;
    if(r==1){
        cout<<1<<endl;return 0;
    }
    gen(r);
    int i=0;
    vector<int>nyon;
    while(prime[i]<=r){
        if(r%prime[i]==0){
            if(!wek[prime[i]]){
                nyon.push_back(prime[i]);
                wek[prime[i]]=1;
            }
            hasi[prime[i]]++;
            r/=prime[i];
        }else i++;
    }
    for(int j=0 ; j<nyon.size() ; j++){
        cout<<nyon[j];
        if(hasi[nyon[j]]>1){
            cout<<"^"<<hasi[nyon[j]];
        }
        if(j<nyon.size()-1)cout<<" x ";
    }
    cout<<endl;
    return 0;
}
