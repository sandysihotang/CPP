#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        if(r%l==0){
            cout<<l<<" "<<r<<endl;continue;
        }
        cout<<l<<" "<<l*2<<endl;
    }
    return 0;
}
