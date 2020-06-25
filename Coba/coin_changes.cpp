#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int q;
    cin >> q;
    while(q--){
        int a,b,n,S;
        cin >> a >> b >> n >> S;

        int r=S/n;
        if(r<a){
            int res=r*n;
            if(res==S){
                cout << "YES" << endl;
                continue;
            }
            if(S-res<=b){
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }else{

            int res=a*n;
            if(res==S){
                cout << "YES" << endl;
                continue;
            }
            if(S-res<=b){
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}
