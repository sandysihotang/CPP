#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n>>k;
    vector<int>ew;
    while(n--){
        cin>>t;
        ew.push_back(t);
    }
    int sum=0;
    int mx=0;
    for(int i= 0 ; i<ew.size(); i++){
        if(ew[i]!=ew[i+1]){
            sum++;
            mx=max(mx,sum);
            continue;
        }
        sum=0;
    }
    cout<<mx<<endl;
    return 0;
}
