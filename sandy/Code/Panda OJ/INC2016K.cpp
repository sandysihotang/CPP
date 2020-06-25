#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector< vector<int> >data;
        for(int j=0 ; j<a ; j++){
            vector<int>keren;
            for(int k=0 ; k<b ; k++){
                int as;
                cin>>as;keren.push_back(as);
            }
        data.push_back(keren);
        }
        for(int j=0 ; j<c;j++){
            vector<vector<int>>copy_data(data.begin(),data.end());
            string action,why;
            cin>>action;
            if(action=="rotate"){
                int r,c,s;
                cin>>why;
                cin>>r>>c>>s;

                if(why=="cw"){
                    int awal=c+s-1;

                    for(int k = r-1 ;k<=r+s-1 ; k++){
                        int akhir=r-1;
                        for(int l =c-1 ; l<=c+s-1 ; l++ ){
                            data[akhir][awal]=copy_data[k][l];
                            akhir++;
                        }
                        awal--;
                    }
                }
                else{
                    int awal=c-1;
                    for(int k=r-1 ; k<r+s ; k++){
                        int akhir=r+s-1;
                        for(int l=c-1 ; l<c+s ; l++){
                            data[akhir][awal]=copy_data[k][l];
                            akhir--;
                        }
                    awal++;
                    }
                }
            }
            else{
                int r1,r2,c1,c2;
                cin>>why;
                cin>>r1>>c1>>r2>>c2;
                if(why=="x"){
                    int awal=r2-1;
                    for(int k = r1-1 ; k<r2 ; k++){
                        int akhir=c1-1;
                        for(int l=c1-1 ; l<c2 ; l++){
                            data[awal][akhir]=copy_data[k][l];
                            akhir++;
                        }
                        awal--;
                    }
                }
                else{
                    for(int k=r1-1 ; k<r2 ; k++){
                        int up=c2-1;
                        for(int l=c1-1 ; l<c2 ; l++ ){
                            data[k][up]=copy_data[k][l];
                            up--;
                        }
                    }
                }
            }
        }

        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0 ; j<data.size(); j++){
            for(int k=0 ; k<data[j].size() ; k++){
                cout<<data[j][k]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}
