#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=2){
        cout << (n%2==0?n:n-1) << "" << 2 << endl;

    }else cout << -1 <<endl;


    return 0;
}
