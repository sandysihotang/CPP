#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        cin>>n;
        cout<< (n * (n * n + 1)) / 2 <<endl;
    }
    return 0;
}
