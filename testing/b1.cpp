#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'winner' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING erica
 *  2. STRING bob
 */

string winner(string erica, string bob) {
    int as[100];
    as['E']=1;as['M']=3;as['H']=5;
    long long eric=0,bobs=0;
    for(int i=0 ; i< erica.size() ; i++)eric+=as[erica[i]];
    for(int i=0 ; i< bob.size();i++)bobs+=as[bob[i]];
    return (eric>bobs?"Erica":(bobs>eric?"Bob":"Tie"));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string erica;
    getline(cin, erica);

    string bob;
    getline(cin, bob);

    string result = winner(erica, bob);
    cout << winner(erica, bob) << endl;
    fout << result << "\n";

    fout.close();

    return 0;
}
