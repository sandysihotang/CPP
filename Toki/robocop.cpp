#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int l=0;
    vector<int>ans;
    for(int i=0 ; i<(a.size()>b.size()?a.size():b.size()) ; i++){
        if(a.size()>b.size()){
            if(a[i]!=b[i]){
                l++;
                ans.push_back(i+1);
            }
            continue;
        }
        if(a[i]!=b[i]){
            l++;
            ans.push_back(i+1);
        }
    }
    if(l==0)cout<<0<<endl;
    else{
        cout<<l<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
