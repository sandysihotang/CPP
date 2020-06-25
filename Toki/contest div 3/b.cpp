#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int po;
    cin>>po;
    int n=po;
    int temp[n];
    int i=0;
    while(n--){
        cin>>temp[i];
        i++;
    }
    int ans=0;

    for(int j=1 ; j<po ; j++){
        if(temp[j]==0 && temp[j-1]==1 && temp[j+1]==1){
            ans++;
            temp[j+1]=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}

