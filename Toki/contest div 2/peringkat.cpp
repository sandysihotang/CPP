#include<bits/stdc++.h>
using namespace std;
bool yes(pair<string,float>a,pair<string,float>b){
    return a.second>b.second;
}
int main(){
    int a;
    cin>>a;
    vector<pair<string,float>>data;
    while(a--){
        string nama;
        float b,c,d;
        cin>>nama>>b>>c>>d;
        data.push_back({nama,((b*2)+(c*3)+(d*5))/3});
    }
    sort(data.begin(),data.end(),yes);
    cout<<data[0].first<<endl;
    return 0;
}
