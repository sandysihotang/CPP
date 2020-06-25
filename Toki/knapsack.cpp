#include<bits/stdc++.h>
using namespace std;
const int MAXN=2000;
struct res{
    int arr[MAXN+1];
};
struct barangs {
    int first;
    int second;
    int third;
};
bool com(barangs a, barangs b){return a.first < b.first;}
res arr[MAXN+1];
int main()
{
    int n,k;
    cin >> n >> k;
    barangs barang[k+1];
    int l=1;
    for(int i = 0 ; i < k; i++) {
        cin >> barang[i].first >> barang[i].second;
        barang[i].third = l; l++;
    }
    sort(barang, barang + k, com);
    for(int i = 1; i < k+1 ; i++) {
        for(int j = 1 ; j < n + 1; j++){
            if(barang[i-1].first <= j) {
                arr[i].arr[j] = max(arr[i-1].arr[j], barang[i-1].second + arr[i-1].arr[j-barang[i-1].first]);
            }else {
                arr[i].arr[j] = arr[i-1].arr[j];
            }
        }
    }
    int row = k, col = n;
    vector<int> ans;
    while (row > 0) {
        if(arr[row].arr[col] > arr[row-1].arr[col]){
            col -= barang[row-1].first;
            ans.push_back(barang[row-1].third);
        }
        row--;
    }
    sort(ans.begin(), ans.end());
    for(auto i: ans) cout << i << endl;
    return 0;
}
