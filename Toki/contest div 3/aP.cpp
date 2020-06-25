#include <bits/stdc++.h>
using namespace std;
vector<pair<int ,int> >data;
void gen(){

}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        long long sum=0,sum1=0;
        if(a%2==1){

            for(int i= a ; i<=b ; i+=2)
                sum+=(i*(-1));
            for(int i=a+1 ; i<=b ; i+=2)
                sum1+=i;
                cout<<sum1+sum<<endl;
            continue;
        }
        for(int i= a ; i<=b ; i+=2)
                sum+=i;
            for(int i=a+1 ; i<=b ; i+=2)
                sum1+=(i*(-1));
                cout<<sum+sum1<<endl;
    }


    return 0;
}
