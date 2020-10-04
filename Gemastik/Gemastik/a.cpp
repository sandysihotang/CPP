#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    map<int,vector<int>> data;
    for(int i = 0; i <= a; i++) {
        for(int j = 0; j < b; j++){
            if(i==0){
                data[i].push_back(0);
                continue;
            }
            int qw;
            cin >> qw;
            if(j>0){
                data[i].push_back(qw+data[i][j]);
            }
            else{
                data[i].push_back(0);
                data[i].push_back(qw);
            }
        }
    }
    while(c--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for(int i = x1 ; i <= x2; i++) {
            sum += data[i][y2] - data[i][y1-1];
        }
        cout << sum << endl;
    }
    return 0;
}
