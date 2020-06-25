#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>data;
    data.push_back('2');
    for(int i=0 ; i<31 ; i++){
        char temp;
        if(data[i]=='2')temp='0';
        else if(data[i]=='0')temp='1';
        else if(data[i]=='1')temp='7';
        else temp='2';
        data.push_back(temp);
    }
    string yes(data.begin(),data.end());
    vector<int>rel;
    for(int i=0 ; i<5 ; i++){
        string saya(yes.begin(),yes.end()-i);
        int sum=0;
        for(int j=0 ; j<saya.size() ; j++){
            sum+=(saya[j]-'0');
        }
        cout<<sum<<endl;
        rel.push_back(sum);
    }
    return 0;
}
