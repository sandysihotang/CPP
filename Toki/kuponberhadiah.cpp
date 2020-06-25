#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,w;
    cin>>n>>w;
    int min=INT_MAX;
    int we;
    int qw;
    while(n--)
    {
        cin>>we;
        cout<<abs(w-we)<<endl;
        if(min>abs(w-we)){
            min=abs(w-we);
            qw=we;
        }
    }
    cout<<we<<endl;
    return 0;
}
