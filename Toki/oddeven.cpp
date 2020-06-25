#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while(tt--){
        int n,x;
        cin >> n >> x;
        int sum[2];
        memset(sum,0,sizeof(sum));
        for(int i=0 ; i<n;i++){
            int a;
            cin >> a; sum[a&1]++;
        }
        if(!sum[1] || (!(sum[1] & 1) && sum[0]==0)) cout << "NO" << endl;
        else {

        }
    }
    return 0;
}
