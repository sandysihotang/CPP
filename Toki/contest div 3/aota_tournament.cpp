#include<bits/stdc++.h>
using namespace std;
bool yet(pair<string,int>a,pair<string,int>b){
    return a.second>b.second;
}
bool yeti(pair<string,int>a,pair<string,int>b){
    return a.second==b.second && a.first<b.first;
}
int main()
{
    unordered_map<string,int>data;
    string m;
    for (int i=0 ; i<8 ; i++){
        cin>>m;
        data[m]=0;
    }
    int a,b;
    string a1,b1;char ow;
    for(int j=0 ; j<28 ; j++){
        cin>>a1>>a;cin>>ow;
        cin>>b>>b1;
        if(a<b){
            data[b1]++;
            continue;
        }
        data[a1]++;
    }
    vector<pair<string,int>>data1;
    for(auto &as : data)data1.push_back({as.first,as.second});
    sort(data1.begin(),data1.end(),yet);
    sort(data1.begin(),data1.end(),yeti);
    for(auto &as: data1)cout<<as.first<<" "<<as.second<<endl;
    return 0;
}
