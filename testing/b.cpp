#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int as=0;
    unordered_map<int,bool>tr;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i]=='_'){as++;tr[i]=true;}
    }
    if(as>0){
        cout << (char)(n[0]-32);
        for(int i=1 ; i<n.size(); i++){
            if(tr[i]){
                cout << (char)(n[i+1]-32);i++;
                continue;
            }
            cout << n[i] ;
        }
        return 0;
    }
    int ckc=0;
    unordered_map<int,bool>re;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i]>='A' && n[i]<='Z'){ckc++;re[i]=true;}
    }
    if(ckc==1){
        for(int i=0 ; i< n.size() ; i++)
        cout << (char)(re[i]?n[i]+32:n[i]);cout<<endl;
    }else{
        for(int i=1 ; i< n.size() ; i++){
            if(re[i]){
                cout << "_" << (char)(n[i]+32);
                continue;
            }
            cout << n[i];
        }
        cout<<endl;
    }
    return 0;
}
