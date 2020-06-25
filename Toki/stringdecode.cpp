#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
        string ans = "";
        int i = s.size()-1;
        while(i >= 0){
            if(s[i] == ']'){
                i--;
                string temp = "";
                while(s[i]!='[') {
                    temp+=s[i];
                    i--;
                }
                i--;
                int num = 0;
                while(s[i]>='0' && s[i]<='9') {
                    num = num * 10 + (s[i]-'0');
                    i--;
                }
                string str = "";
                for(int j = 0; j < num;j++){
                    str+=temp;
                }
                ans+=str;
            } else {
                ans+=s[i];
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
int main() {
    string s;
    cin >> s;
    cout << decodeString(s) << endl;
    return 0;
}
