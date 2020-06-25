#include<bits/stdc++.h>
using namespace std;
vector<string> explode(const string& s, const char& c)
{
	string buff="";
	vector<string> v;

	for(auto n:s)
	{
		if(n != c) buff+=n;
		else if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);

	return v;
}
string lower(string s){
    string ans="";
    for(auto i: s){
        if(i>='a' && i<='z')ans+=i;
        else ans+='a'+(i-'A');
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin,a);
        vector<string>res = explode(a,' ');
        for(int i=0 ; i<res.size();i++){
            cout << res[i] ;
            string left=lower(res[i]);
            for(int j=i+1 ; j<res.size();j++){
                string right=lower(res[j]);
                if(left==right){i++;}
                else break;
            }
            if(i<res.size()-1)cout << " ";
            else cout << endl;
        }
    }
    return 0;
}
