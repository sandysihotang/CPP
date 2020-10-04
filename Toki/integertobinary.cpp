#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 10;
    bitset<32> r(n);
    string res = "";
    for(int i = 0; i < 4; i++){
        res+= static_cast<char>('0' + r[i]) ;
    }
    cout << res << endl;
    return 0;
}
