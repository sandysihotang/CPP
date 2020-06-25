#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int aw[n];
    for(int i = 0 ; i< n  ; i++)
    {
        cin>>aw[i];
    }
    sort(aw,aw+n);
    cout<<min(aw[n-1]-aw[1],aw[n-2]-aw[0])<<endl;
    return 0;
}
