#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long>a(n),d;
    long long ans=0,sum=0;
    for(int i=0 ; i<n ; i++)cin >> a[i];
    sort(a.rbegin(),a.rend());
    for(long long i:a){
        sum+=i;d.push_back(sum);
    }
    for(long long i:d){
        ans+=i;
    }
    cout << ans+d[d.size()-1]-a[0]<< endl;
    return 0;
}
