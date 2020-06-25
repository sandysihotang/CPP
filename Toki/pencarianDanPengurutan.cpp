#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin >> n >>s;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }
    sort (a.begin(), a.end());
    auto up = lower_bound(a.begin(),a.end(),s);
    if(a[up - a.begin()] == s){
        cout << s << endl;
    } else if(up - a.begin() == a.size()){
        cout << a[up-a.begin()] << endl;
    } else if(up - a.begin() == 0 ){
        cout << a[0] << endl;
    }else {
        int left = s - a[up- a.begin()-1], right =a[up- a.begin()]-s;
        if(left == right || left < right) cout << a[up- a.begin()-1] << endl;
        else cout << a[up- a.begin()] << endl;
    }
    return 0;
}
