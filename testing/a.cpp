#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'smallestString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER weight as parameter.
 */
long long ans[19];
void generatea(){
    ans[0]=1;
    for(int i=1 ; i<18 ; i++){
        ans[i]=((i+1)*ans[i-1])+(i+1);
    }
}


string smallestString(long weight) {
    generatea();
    vector<char>data;
    for(int i=17 ; i>=0 ; i--){
        while(ans[i]<=weight){
            weight-=ans[i];
            data.push_back((char)('A'+i));
        }
    }
    sort(data.begin(),data.end());
    string jiu(data.begin(),data.end());
    return jiu;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string weight_temp;
    getline(cin, weight_temp);

    long weight = stol(ltrim(rtrim(weight_temp)));

    string result = smallestString(weight);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
