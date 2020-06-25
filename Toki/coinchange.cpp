#include<bits/stdc++.h>
using namespace std;
const int MAXN=2000;
struct res{
    int arr[MAXN+1];
};
res arr[MAXN+1];
int main()
{
    int n;
    cin >> n;
    float ans= 0.0;
    for(int i=2 ; i < 5 ; i++){
        ans += ((float)n/float(i));
    }
    cout << (int)ans << endl;
    return 0;
}

