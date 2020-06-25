#include<bits/stdc++.h>
using namespace std;
void test_case() {
    string s;
    cin >> s;
    int n = s.size();
    int i =0;
    string ans = "";
    while(i < n){
        if(i & 1){
            if(s[i] == s[i+1] && i+1<n){
                ans += s[i];
                i+=2;
                continue;
            } else if(i+1>=n) {
                ans += s[i];
            }else {
                ans += s.substr(i,2);
            }
            i++;
            continue;
        }
        ans += s[i];
        i++;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}
