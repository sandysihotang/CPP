#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string>data;
    while(n--){
        cin>>s;
        if(s.size()==2)swap(s[1],s[0]);
        data.push_back(s);
    }
    sort(data.begin(),data.end());
    for(int i=0 ; i<data.size() ; i++)
    {
        if(data[i].size()==2)swap(data[i][1],data[i][0]);
        cout<<data[i]<<endl;
    }
    return 0;
}
