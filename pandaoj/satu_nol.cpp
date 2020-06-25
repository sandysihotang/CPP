#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<pair<ll,ll>> vp;
bool sort_val2(pair<ll,ll>a,pair<ll,ll>b){
    return a.second<b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        int t;
        cin >> t;
        ll w,h;
        vp data;
        for(int j=0 ; j < t ; j++){
            cin >> w >> h;data.push_back({w,h});
        }
        cout << "Kasus #" << i << ": " <<endl;
    }
    return 0;
}
