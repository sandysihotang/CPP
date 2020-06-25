#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=a ; j++){
            if(i%j==0 && i*j>a && i/j<a){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
