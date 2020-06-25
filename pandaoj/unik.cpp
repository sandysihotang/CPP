#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map<ll, bool>data;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);

    ll n;
    cin>>n;
    int sum=0;
    for(int i=0 ; i< n ; i++){
        ll re;
        cin>>re;
        if(data[re]==true)
        {
            sum++;
            continue;
        }
        data[re]=true;
    }
    cout<<sum<<endl;
    return 0;
}
