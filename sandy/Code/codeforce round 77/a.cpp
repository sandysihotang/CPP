#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;bool fd=false;
        for(int i=0 ; i<s.size()-1 ; i++){
            if(s[i]==s[i+1] && s[i]!='?' && s[i+1]!='?'){
                fd=true;break;
            }
        }
        if(fd){
            cout << -1 << endl;
            continue;
        }
        if(s.size()==1){
            cout << 'a' << endl;continue;
        }
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!='?'){
                cout << s[i];continue;
            }
            if(s[i-1]==s[i+1]){
                if(s[i-1]=='a'){
                    cout << 'b';s[i]='b';
                }
                if(s[i-1]=='b'){
                    cout << 'c';s[i]='c';
                }
                if(s[i-1]=='c'){
                    cout << 'b';s[i]='b';
                }
                continue;
            }
            if(s[i]=='?' && s[i+1]=='?'){
                if(s[i-1]=='a'){
                    cout << 'b';s[i]='b';
                }
                else if(s[i-1]=='b'){
                    cout << 'c';s[i]='c';
                }
                else{
                    cout << 'b';s[i]='b';
                }
                continue;
            }

            if((s[i-1]=='a' && s[i+1]=='b')||(s[i-1]=='b' && s[i+1]=='a')){
                cout << 'c';s[i]='c';
            }else if((s[i-1]=='a' && s[i+1]=='c')||(s[i-1]=='c' && s[i+1]=='a')){
                cout << 'b';s[i]='b';
            }else {
                cout << 'a';s[i]='a';
            }
        }
        cout << endl;
    }
	return 0;
}
