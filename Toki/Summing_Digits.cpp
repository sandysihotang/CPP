#include<bits/stdc++.h>
using namespace std;
void sum(vector<char>ans);
void sum(vector<char>ans){
    if(ans.size()!=1){
        int cls=0,i=0;
        while(ans[i]!='\0'){
            cls+=(ans[i]-'0');
            i++;
        }
        string k;
        k+=to_string(cls);
        vector<char>temp(k.begin(),k.end());
        sum(temp);
    }
    else{
        cout<<ans[0]<<endl;
    }
}
int main()
{
    string a;
    while(cin>>a &&  a!="0"){
        vector<char>ans(a.begin(),a.end());
        sum(ans);
    }
    return 0;
}
