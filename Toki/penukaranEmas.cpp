#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tot=0,res=0;
    for(int i=2 ; i<5; i++){
        tot+= n/i;
        cout << tot << ' ' << n/i << endl;
    if(n/i != 0){
        res+=tot;
    }
        n/=i;
    }
    cout << res << endl;
    return 0;
}
