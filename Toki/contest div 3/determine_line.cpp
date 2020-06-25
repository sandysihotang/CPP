#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int , int>data;
    int asd=n;
    while(asd--){
        int a;
        cin>>a;
        while(a--){
            int aw;
            cin>>aw;
            data[aw]++;
        }
    }
    for(auto &x : data)
        if(x.second==n)cout<<x.first<<" ";
    cout<<endl;
    return 0;
}
