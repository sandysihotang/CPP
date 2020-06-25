#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool as=false;
    string ew;
    for(int i=0 ; i<5 ; i++){
        cin>>ew;
        if(s[0]==ew[0])as=true;
        if(s[1]==ew[1])as=true;
    }
    cout<<(as?"YES":"NO")<<'\n';
    return 0;
}
