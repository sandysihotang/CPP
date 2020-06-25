#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b;

    char temp;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a);scanf("%c",&temp);
        scanf("%d",&b);scanf("%c",&temp);
        printf("Case %d: %d%\n",i+1,a+b);
    }
    return 0;
}
