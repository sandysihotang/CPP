#include<bits/stdc++.h>
using namespace std;
const long long m = pow(2,1e9);
unsigned long long int powxy(long long int x, long long int y) {
    if (y == 0) return 1;
    if (y%2 == 1) return (x*powxy(x, y-1))%m;
    long long int t = powxy(x, y/2);
    return (t*t)%m;
}
int main()
{
    long long n;
    cin>>n;
    cout<<((powxy(4,n)-1)/3)+1<<endl;
    return 0;
}
