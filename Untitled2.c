#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        vector<int>a(3);
        int n;
        for(auto &i :a){
            cin >> i;
        }
        cin >> n;
        sort(a.rbegin(),a.rend());
        for(int i=1 ; i<3 ; i++){
            n-=(a[0]-a[i]);
        }
        cout << (n%3==0 && n > -1?"YES":"NO") << endl;
    }
    return 0;
}

