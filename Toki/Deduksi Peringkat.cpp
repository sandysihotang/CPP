#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,qw;
    cin>>qw;
    for(int j = 0 ; j<qw ; j++){
        vector<int>data;
        cin>>a>>b;
        int as;
        for(int i=0 ; i<a; i++){
            cin>>as;
            data.push_back(as);
        }
        sort(data.begin(),data.end());
        int fr=0;
        for(int i=data.size()-1 ; i>=0 ; i--){
            if(b>=data[i])break;
            fr++;
        }
        cout<<"Kasus #"<<j+1<<": "<<fr+1<<endl;
    }
    return 0;
}
