#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long total=0, quadratic=1;
    for(int i=0 ; i<=n ; i++){
        int k;
        cin >> k;
        total += (k*quadratic);
        quadratic*=2;
    }
    quadratic/=2;
    if(total % quadratic == 0){
        cout << total /quadratic << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
