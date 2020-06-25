#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int d;
        cin >> d;
        vector<int> req(d);
        for(int i=0 ; i< d ; i++)cin >> req[i];
        sort(req.rbegin(),req.rend());

        int sum=0;
        for(int i=0 ; i<d ; i++){
            if(req[i]>=sum+1)++sum;
            else break;
        }
        cout << sum << endl;
    }
    return 0;
}
