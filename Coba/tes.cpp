#include<bits/stdc++.h>
using namespace std;
int pow(int x, int y){
    if(y==0)return 1;
    else return x * pow(x,y-1);
}
string g(string str){
    int i=0;
    string new_str="";
    while(i<str.size()-1){
        new_str=new_str+str[i+1];
        i+=1;
    }
    return new_str;
}
string f(string str){
    if(str.size()==0){
        return "";
    }
    if(str.size()==1){
        return str;
    }
    else{
        return f(g(str))+str[0];
    }
}

string h(int n, string str){
    while(n!=1){
        if(n%2 ==0)n=n/2;
        else n= 3*n +1;
        str=f(str);
    }
    return str;
}

int main(){
    cout << h(1000000000000000,"fruits") << endl;
    return 0;
}

