#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,d,k;
    cin>>n>>t>>k>>d;
    cout << ((n-1)/k*t > d?"YES":"NO") << endl ;
    return 0;
}
