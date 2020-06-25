#include<bits/stdc++.h>
using namespace std;
const int md = (int) 1e9 + 7;
inline int mul(int a, int b) {
  return (int) ((long long) a * b % md);
}
inline int power(int a, long long b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b >>= 1;
  }
  return res;
}



int main(){
    long long n;
    cin >> n;
    n++;
    cout << (power(4,n-1)+2) % md / 3  << '\n';
    return 0;
}
