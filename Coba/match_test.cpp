#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin >> n;
    for(int i=0 ; i<=n ; i++){
        long long sum=0;
        for(int j=pow(2,i)/2 ; j>0 ; j/=2){
            sum+=pow(j,2);
        }
        cout<< i <<": " <<sum+1<<endl;
    }
    return 0;
}
