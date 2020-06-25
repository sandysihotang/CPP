#include<bits/stdc++.h>
using namespace std;
int da[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    for(char i: a){
        da[i]++;
    }
    cout << abs(da['N']-da['S'])+abs(da['E']-da['W']) << endl;
    return 0;
}
