#include<iostream>
using namespace std;

int main() {
  int n, a, min, max, sum = 0;
  cin >> n;

  for(int i = 0; i < n; i ++) {
    cin >> a;
    if(i == 0) {
      min = a;
      max = a;
    } else {
      if(a < min) {
        min = a;
      } else {
        max = a;
      }
    }
    sum += a;
  }
  cout << min << " " << max << " " << sum << endl;

  return 0;
}