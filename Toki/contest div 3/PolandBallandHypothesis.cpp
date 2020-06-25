#include<bits/stdc++.h>
using namespace std;
unordered_map<int,bool>ye,ter;
void gen(){
    for(int i=2 ; i<1e6+1 ; i++){
        if(!ye[i]){
            ter[i]=true;
            for(int j=i ; j<1e6+1 ; j+=i)
                ye[j]=true;
        }
    }
}
int main()
{
    gen();
    int i=1,n;
    cin>>n;
    while(true){
        if(!ter[(n*i)+1]){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}
