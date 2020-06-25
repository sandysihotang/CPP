#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        int t;
        cin >> t;
        vector<pair<int ,int>>data;
        while(t--){
            int x,y;
            cin >> x >> y;
            data.push_back({x,y});
        }cout << endl;
        sort(data.rbegin(),data.rend());
        for(auto &n: data){
            cout << n.first << " " << n.second << endl;
        }
    }
    return 0;
}
