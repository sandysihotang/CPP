#include<bits/stdc++.h>
using namespace std;
bool tes(pair<char,int>a,pair<char,int>b){
    return a.second>b.second;
}
bool tes1(pair<char,int>a,pair<char,int>b){
    return a.second==b.second && a.first>b.first;
}
int main()
{
    int a;
    cin>>a;
    while(a--){
        int r;
        cin>>r;
        unordered_map<char,int>data;
        while(r--){
            char hu;
            cin>>hu;
            data[hu]++;
        }
        vector<pair<char,int>>data1;
        for(auto &a : data)data1.push_back({a.first,a.second});
        sort(data1.begin(),data1.end(),tes);
        sort(data1.begin(),data1.end(),tes1);
        printf("%c\n",data1[0].first);
    }
    return 0;
}
