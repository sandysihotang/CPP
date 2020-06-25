#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        if(i==a-1)sum++;
    }
    cout<<sum-1<<endl;
    return 0;
}
