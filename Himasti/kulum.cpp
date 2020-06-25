#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec,vecc;
    int n ,m , inp;
    cin>>n>>m;
    for(int i=0 ; i<n ;i++){
        cin >> inp;
        vec.push_back(inp);
    }
    for( int i=0 ; i<n ;i++ ){
        cin >> inp ;
        vecc.push_back(inp);
    }
    int ind=0;
    int sum=0;
    for( int i=0 ; i<n ; i++ ){
        sum+=vec[i];
        if(i==m){
                ind=1;
            //cout << sum << endl ;
            break;
        }
        if(ind==1){
            if(i<(n-m)+1 &&vecc[i]==1){
                sum+=vec[i];
            }
        }

    }
    cout << sum << endl ;
}
