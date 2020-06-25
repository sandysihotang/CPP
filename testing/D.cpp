#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    unordered_map<char,int>data;
    for(char v : n){
        data[v]++;
    }
    cout<<(data.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!")<<endl;
    return 0;
}
