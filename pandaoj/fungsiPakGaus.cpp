#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0 ; i < n ;i++ ){
        int a,b,c;
        cin>>a>>b>>c;
        long long sum=1;
        for(int j =a ; j>0 ; j--){
            int we=j%c;
            long long aw=pow(we,c);
            sum*=(aw%c);
        }
        cout<<sum%c<<endl;
    }
    return 0;
}
