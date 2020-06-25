#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1;
    while(s[0]!='\0'){
        cout<<s[0];
        s.erase(s.begin(),s.begin()+i);
        i++;
    }
    cout<<endl;
    return 0;
}
