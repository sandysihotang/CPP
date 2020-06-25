#include<bits/stdc++.h>
using namespace std;
int main() {
    int c;
    unordered_map<string, int> r;
    cin >> c;
    string ans; int it=INT_MIN;
    while(c--) {
        string s; int p;
        cin >> s >> p;
        r[s]+=p;
        if(it<r[s]) {
            ans = s;
            it = r[s];
        }
    }
    cout << ans << endl;
    return 0;
}
