#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(b) b.begin(),b.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(6);
    cout << fixed;
    int n;
    cin >> n;
    while(n--){
        int t, a;
        cin >> t >> a;
        vector<int> data(t);
        for(auto& i : data){
            cin >> i;
        }
        sort(all(data));
    }
    return 0;
}

