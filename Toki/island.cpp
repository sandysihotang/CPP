#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s;
    s.push_back(1);
    s.push_back(2);
    for(int i:s)cout << i << ' ';
    s.resize(3);
    cout << endl;
    for(int i: s)cout << i << ' ';
    return 0;
}
