#include<iostream>
//#include<algorithm>
using namespace std;

int main() {
  int n, k, x;
  int s = 0;
  int i=0;

  cin >> n >> k;
  while(i < n) {
    cin >> x;
    int a = 2 * x;
    int b = 2 * (k-x);

    if(a > b) {
      s += b;
    } else {
      s += a;
    }
    i++;
  }

  cout << s << endl;
  return 0;
}

//別解
// const int MAX_N = 100;
// int N, K;
// int X[MAX_N];

// int main() {
//   scanf("%d", &N);
//   scanf("%d", &K);
//   for(int i=0; i < N; i ++) {
//     scanf("%d", X + i);
//   }
//   int ans = 0;
//   for(int i =0; i < N; ++i) {
//     int tmp = min(X[i], K - X[i]);
//     ans += tmp;
//   }
//   printf("%d\n", ans * 2);
//   return 0;
// }