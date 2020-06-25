#include<bits/stdc++.h>
using namespace std;
string getName(int i){
    return (char)('A' + i / 26) + "" +(char)( 'a' - i % 26);
}
string name[51];
int main()
{
    int n,k;
    cin >> n >> k;
    bool check[n];
    for(int i = k-1 ; i<n ; i++){
        string as;
        cin >> as;
        check[i]=(as=="NO");
    }
    for(int i=0 ; i < n ; i++){
        if(i>0)cout<<" ";
        if(check[i]){
            name[i]=name[i-k+1];
        }else{
            name[i]=getName(i);
        }
        cout << name[i];
    }
    cout<<endl;
    return 0;
}
