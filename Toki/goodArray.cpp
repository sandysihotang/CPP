#include<bits/stdc++.h>
using namespace std;
void test_case() {
    int n;
    int w;
    cin >> n;
    vector<int>not_good(2);
    not_good[0]=0;
    not_good[1]=0;
    for(int i=0 ; i<n ; i++) {
        cin >> w;
        if((i&1) != (w&1)){
            not_good[i&1]++;
        }
    }
    if(not_good[0] == not_good[1]) cout << not_good[0] << endl;
    else cout << -1 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}

