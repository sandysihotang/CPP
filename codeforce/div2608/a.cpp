#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;

    long long a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >>f;
    long long mx=INT_MIN;
    for(int i=0 ; i<=d ; i++){
        if(a>=i && b>=d-i && c>=d-i){
            if((i*e)+((d-i)*f)>mx){
                mx=(i*e)+((d-i)*f);
            }
        }
    }
    cout << mx << endl;
    return 0;
}
