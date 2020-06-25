#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    cout << a.substr(0,2) << b.substr(0,2) << " " <<a.substr(2,3) << b.substr(2,3) << endl;
    return 0;
}
