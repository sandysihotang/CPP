#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,t;
    vector<int>a;
    unordered_map<int,int>sa;
    cin>>n>>k;

    for(int i = 0 ; i< n ; i++){
        cin>>t;
        if(!sa[t]){
            a.push_back(t);
        }
        sa[t]=1;
    }
    sort(a.begin(),a.end());
    int sum=0;
    int j=0;
    for(int i=0 ; i<k ; i++){
        bool found=false;
        if(a[j]!='\0'){
            while(j<a.size()){
                if(a[j]>0){
                    cout<<a[j]<<endl;
                    sum+=a[j];
                    a[j+=1]-=sum;
                    found=true;
                    break;
                }
            }
        }
        if(!found)
         cout<<0<<endl;
    }
    return 0;
}
