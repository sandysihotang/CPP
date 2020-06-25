
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int maxn=1001;
int data[maxn][maxn];

int m,n;
int searchData(int a, int b,int pos){
    if(data[a][b+1]!=-1 && data[a][b+1]>n){

    }
}
int main(){
    IOS;
    cin >> m >> n;
    forn(i,m){
        forn(j,n){
            cin >> data[i][j];
        }
    }
    int a,b;
    cin >> a >> b;
    int maxAll=searchData(a,b,1);
    return 0;
}
