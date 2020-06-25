#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b, c;
    cin>>a>>b>>c;
    if(a<b && a<c && a+1<c){
        cout<<(a*3)+3<<endl;
    }
    else if(a<b && a+1==c){
        cout<<(c*3)-3<<endl;
    }
    else if(a==b && a==c){
        cout<<(c*3)-3<<endl;
    }
    else if(a==b && b<c){
        cout<<(b*3)<<endl;
    }
    else if(b<=a && b<c){
        cout<<b*3<<endl;
    }
    else{
        cout<<c*3-3<<endl;
    }
    return 0;
}
