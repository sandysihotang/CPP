#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case "<<i+1<<": " <<a[1]<<endl;
    }
    return 0;
}
