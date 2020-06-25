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

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    forn(i,n)cin >> a[i];
    sort(all(a));
    forn(i,n)
        if(i==n-1)
        cout << a[i] << '\n';
        else
        cout << a[i] << " ";

	return 0;
}

