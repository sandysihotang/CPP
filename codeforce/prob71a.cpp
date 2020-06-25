#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.size()<11){
            cout<<s<<endl;
            continue;
        }
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    return 0;
}
