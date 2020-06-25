#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        int T;
        cin >> T;
        long long aw=pow(T,5);
        cout << aw<< endl;
        cout << "Kasus #" << i << ": " << (aw+1)/(T+1) << endl;
    }
    return 0;
}
