#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> data(t);
    for(auto &i : data) cin >> i;
    int re = t/2;
    int from = 0, to = t - 1;

    if (t%2 == 1) {
        int sum = 0;
        while(from <= re && to>=re) {
            if(data[from]!= data[to]){
                from++;
                sum++;
                continue;
            }
            from++;to--;
        }
        cout << sum+1 << endl;
    } else {
        int sum = 0;
        while(from <= re && to>re) {
            if(data[from]!= data[to]){
                from++;
                sum++;
                continue;
            }
            from++;to--;
        }
        cout << sum << endl;
    }
    return 0;
}
