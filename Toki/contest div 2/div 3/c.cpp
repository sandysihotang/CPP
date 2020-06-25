#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,k;
    cin>>n>>k;
    vector<int>temp;
    for(int i=0 ; pow(2,i)<=n ; i++){
        temp.push_back(pow(2,i));
    }

    return 0;
}
