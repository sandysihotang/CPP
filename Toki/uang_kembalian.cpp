#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll data[50001];
int main(){
    int n,y,k;
    vector<ll>uang;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        cin>>y;
        uang.push_back(y);
    }
    cin>>k;
    sort(uang.begin(),uang.end());
    for(int i=1 ; i<=k ; i++)data[i]=50001;

    for(int i=0 ; i<uang.size() ; i++){
        for(int j=1 ; j<=k ; j++){
            if(j-uang[i]>=0){
                ll pae=data[j-uang[i]]+1;
                data[j]=min(pae,data[j]);
            }
            else{
                data[j]=data[j];
            }
        }
    }
    cout<<data[k]<<endl;
    return 0;
}
