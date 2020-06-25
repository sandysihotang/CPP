#include<bits/stdc++.h>
using namespace std;
void test_case() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s ;
    int pos = -1, ans = 0;
    for(int i = 0 ; i<n ; i++) {
        if(s[i] == '1'){
            pos = i;
        } else {
            if(pos + k < i || pos == -1){
                if(i+k < n) {
                    bool ok = 0;
                    for(int j=i+1; j<=i+k;j++){
                        if(s[j]==1){
                            ok = 1;
                            break;
                        }
                    }
                    if(!ok){
                        s[i] = '1';
                        pos = i;
                        ans++;
                        i+=k;
                    }
                }
            }
        }
    }
    cout << pos << ' ' << ans << endl;
    if(pos == -1 && ans == 0) cout << 1 << endl;
    else cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}


