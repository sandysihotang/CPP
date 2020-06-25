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
    int i=0;
    string ans="";
    int mx=INT_MAX;
    while(true){
        if(i+b==s.size()+1){
            break;
        }
        string temp(s.begin()+i,s.begin()+i+b);
        int tempmin=0;
        int tempmax=0;
        for(char i:temp){
            if(i=='-')tempmin++;
            else if(i=='+')tempmax++;
        }
        if(mx>tempmax-tempmin){
            mx=tempmax-tempmin;
            ans=temp;
        }
        i++;
    }
    cout << ans << endl ;
    return 0;
}
