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

    int n,d;
    cin >> n >> d;
    int pos=-1;
    bool fnd=false;
    for(int i=0 ; i<n ; i++){
        int a;cin >> a;
        if(a==d && !fnd){
         pos=i;fnd=true;
        }
    }
    cout << pos << endl;
	return 0;
}


