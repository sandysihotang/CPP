#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string >data;
    while(n--){
        string a;
        cin>>a;
        int sum=0;
        for(int i=0 ; i< a.size() ; i++){
            if(a[i]<='Z' && a[i] >='A'){
                sum+=a[i]+32-'a';
                continue;
            }
            sum+=a[i]-'a';

        }
        data.push_back(to_string(sum));
    }
    vector<int>bil;
    for(int i=0 ; i< data.size() ; i++){
        string as= data[i];
        while(as.size()>1){
            int sum=0;
            for(int j =0 ; j<as.size() ; j++){
                sum+=as[j]-'0';
            }
            as.clear();
            as= to_string(sum);
        }
        bil.push_back(stoi(as));
    }
    float sums=0;
    for(int i= 0 ; i<bil.size() ; i++){
        sums+=bil[i];
    }
    cout<<fixed<<setprecision(2)<<sums/bil.size()*100<<"%"<<endl;
    return 0;
}
