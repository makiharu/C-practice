#include<iostream>
using namespace std;
static const int MAX = 1000;

int main() {
  int n, R[MAX];
  cin >> n;
  for(int i = 0; i < n; i++) cin >> R[i];

  int minv = R[0];
  for(int i = 0; i < n; i++) {
    for(int n = i; 0 <= n; n--) {
      minv = min(minv, R[i]);
    }
  }

  return 0;
}