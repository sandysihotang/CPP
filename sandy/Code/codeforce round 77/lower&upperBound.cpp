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
    int n;cin >>n;
    vector<int>data(n);
    for(int i=0 ; i<n ; i++)cin >> data[i];
    sort(data.begin(),data.end());
    int searchD;
    cin >> searchD ;
    vector<pair<int,int>>find;
    for(int i=0 ; i < searchD ; i++){
        int a,b;cin >> a >> b; find.push_back({a,b});
    }
    for(auto &i:find){
        auto lower=lower_bound(data.begin(),data.end(),i.fi);
        auto upper=upper_bound(data.begin(),data.end(),i.se);
        cout << (upper-data.begin())-(lower-data.begin()) << endl;
    }
    return 0;
}
