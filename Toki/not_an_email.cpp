#include<bits/stdc++.h>
using namespace std;
bool dat(pair<string,int>a,pair<string,int>b){
    return a.second==b.second && a.first<b.first;
}
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int k;
        cin>>k;
        string email;
        unordered_map<string,int>temp;
        while(k--){
            cin>>email;
            int a=email.find("@")+1;
            email.erase(email.begin(),email.begin()+a);
            temp[email]++;
        }
        vector<pair<string,int>>data;
        for(auto &a : temp)data.push_back({a.first,a.second});
        sort(data.begin(),data.end());
        sort(data.begin(),data.end(),dat);
        printf("Kasus #%d: %s\n",i,data[0].first.c_str());
    }
    return 0;
}
