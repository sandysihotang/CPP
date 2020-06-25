#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int k,sum=0;
        cin>>k;
        for(int j=0 ; j<k ; j++){
            int as;
            cin>>as;
            sum+=as;
        }
        cout<<"Case #"<<i<<": "<<(sum%2)<<endl;
    }

    return 0;
}
