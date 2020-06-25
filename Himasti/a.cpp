#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;

    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    string ans(s.begin(),s.begin()+b);
    int tot=0;
    for(int i=0 ; i<b ; i++){
        if(s[i]=='-')tot--;
        else tot++;
    }
    int pos=0;
    int ck=tot;
    while(true){
        if(pos+b==s.size()){
            break;
        }
        int cn=pos;
        ++pos;
        (s[cn]=='-'?tot++:tot--);
        (s[pos+b-1]=='+'?tot++:tot--);
        if(ck>tot){
            string temp(s.begin()+pos,s.begin()+pos+b);
            ans=temp;
            ck=tot;
        }
    }
    cout << ans << endl ;
    return 0;
}
