#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int a,b,c;
	vector<vector<long long int>>vec(10000+1, vector<long long int>(10001));
	cin >> a >> b >> c ;
	int val;
	for( int i=1 ; i<=a ; i++ ){
		for( int j=1 ; j<=b ; j++ ){
			cin >> vec[i][j];
		}
	}

	int x,y,k,l;
	for(int i=1 ; i<=c ; i++ ){
		int result=0;
		cin >> x >> y >> k >> l;
		for( int j=x ; j<=k ; j++){
			for( int o=y ; o<=l ;o++){
				result+=vec[j][o];
			}
		}
		cout << result << endl ;
	}


return 0;
}
