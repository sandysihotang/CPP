#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    vector<float>angka;
    vector<char>ope;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i]!=' '){
            vector<char>an;
            if(n[i]<='9' && n[i]>='0'){
                for( ; ;i++){
                    if(n[i]<='9' && n[i]>='0')
                        an.push_back(n[i]);
                    else
                        break;
                }
                string myan(an.begin(),an.end());
                //cout<<myan<<endl;
                angka.push_back(stof(myan));
            }else{
                ope.push_back(n[i]);
            }

        }
    }
        while(angka.size()>1){
            bool yey=false;
            for(int i=0 ; i<ope.size();i++){
                if(ope[i]=='('){
                    if(ope[i+1]=='^')
                        angka[i]=pow(angka[i],angka[i+1]);
                    else if(ope[i+1]=='*' || ope[i+1]=='/')
                        angka[i]=(ope[i+1]=='*'?angka[i]*angka[i+1]:angka[i]/angka[i+1]);
                    else if(ope[i+1]=='+' || ope[i+1]=='-')
                        angka[i]=(ope[i+1]=='+'?angka[i]+angka[i+1]:angka[i]-angka[i+1]);

                    ope.erase(ope.begin()+i);
                    ope.erase(ope.begin()+i);
                    ope.erase(ope.begin()+i);
                    angka.erase(angka.begin()+i+1);
                    yey=true;
                    break;
                }
            }
            if(yey)continue;
            for(int i=0 ; i<ope.size();i++){
                if(ope[i]=='^'){
                    angka[i]=pow(angka[i],angka[i+1]);
                    angka.erase(angka.begin()+i+1);
                    ope.erase(ope.begin()+i);
                    yey=true;
                    break;
                }
            }
            if(yey)continue;
            for(int i=0 ; i<ope.size();i++){
                if(ope[i]=='*' || ope[i]=='/'){
                    angka[i]=(ope[i]=='*'?angka[i]*angka[i+1]:angka[i]/angka[i+1]);
                    angka.erase(angka.begin()+i+1);
                    ope.erase(ope.begin()+i);
                    yey=true;
                    break;
                }
            }
            if(yey)continue;
            for(int i=0 ; i<ope.size();i++){
                if(ope[i]=='-' || ope[i]=='+'){
                    angka[i]=(ope[i]=='+'?angka[i]+angka[i+1]:angka[i]-angka[i+1]);
                    angka.erase(angka.begin()+i+1);
                    ope.erase(ope.begin()+i);
                    yey=true;
                    break;
                }
            }
        }

    cout<<"= "<<fixed<<setprecision(1)<<angka[0]<<endl;
    return 0;
}
