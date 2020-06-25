#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,b;
    cin>>n>>b;
    transform(n.begin(),n.end(),n.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    cout<<(b==n?0:b<n?1:-1)<<endl;
    return 0;
}
