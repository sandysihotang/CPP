#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'investment' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER_ARRAY e
 */

int investment(vector<int> s, vector<int> e) {
    int sum=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==e[i])sum++;
        else if(s[i]==s[i+1] && e[i]==e[i+1])sum++;
    }
    cout << sum << endl;
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s_count_temp;
    getline(cin, s_count_temp);

    int s_count = stoi(ltrim(rtrim(s_count_temp)));

    vector<int> s(s_count);

    for (int i = 0; i < s_count; i++) {
        string s_item_temp;
        getline(cin, s_item_temp);

        int s_item = stoi(ltrim(rtrim(s_item_temp)));

        s[i] = s_item;
    }

    string e_count_temp;
    getline(cin, e_count_temp);

    int e_count = stoi(ltrim(rtrim(e_count_temp)));

    vector<int> e(e_count);

    for (int i = 0; i < e_count; i++) {
        string e_item_temp;
        getline(cin, e_item_temp);

        int e_item = stoi(ltrim(rtrim(e_item_temp)));

        e[i] = e_item;
    }

    int result = investment(s, e);

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
