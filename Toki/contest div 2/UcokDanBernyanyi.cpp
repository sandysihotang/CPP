#include<bits/stdc++.h>
using namespace std;
string re[14]={"Selamat","ulang","tahun,","selamat","ulang","tahun,","selamat","ulang","tahun","untuk","Ucok,","selamat","ulang","tahun"};
int main(){
    int n;
    cin>>n;
    vector<string>data;
    while(n--){
        string a;
        cin>>a;
        data.push_back(a);
    }
    int j=0;
    while(){
        for(int i=0 ; i<14 ; i++){
                if(i<13)
                cout<<data[j]<<":"<<re[i]<<endl;
                else
                cout<<data[j]<<":"<<re[i]<<" ..."<<endl;
            j++;
            if(j==data.size())j=0;
        }
    }
    return 0;
}
