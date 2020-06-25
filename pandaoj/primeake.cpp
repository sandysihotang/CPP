#include<bits/stdc++.h>
using namespace std;
const long long int cnt=989999;
unordered_map<int,bool>prime;
vector<int>this_prime;
void genPrime()
{
    int ow=1;
    for(int i=2 ; i<=cnt ; i++){
        if(!prime[i]){
            this_prime.push_back(i);
            for(int j=i ; j<=cnt ; j+=i){
                prime[j]=true;
            }
        }
    }
}
int main(){
    genPrime();
    int T;
    cin >> T;
    while(T--){
        int K;
        cin >> K;
        cout << this_prime[K-1] << endl;
    }
    return 0;
}
