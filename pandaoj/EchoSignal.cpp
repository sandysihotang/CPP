#include<bits/stdc++.h>
using namespace std;
typedef long long int int64;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int64 t;
    int64 cases=1;
    cin >> t;
    while(t--){
        int64 n,R,x,y;
        cin >> n >> R;
        vector< pair<int64,int64>>point;
        for(int i=0 ; i<n ; i++){
            cin >> x >> y ;
            point.push_back({x,y});
        }
        int64 maxint=INT_MIN;
        for(int i=0 ; i<point.size() ; i++){
            int64 cnt=-1;
            for(int j=0 ; j< point.size() ; j++ ){
                int64 aw=pow(abs(point[i].first-point[j].first),2);
                int64 ew=pow(abs(point[i].second-point[j].second),2);
                if(sqrt(aw+ew) <= R)cnt++;
            }
            maxint=max(maxint,cnt);
        }
        cout << "Case #" << cases << ": " << maxint << endl;
        cases++;
    }
    return 0;
}
