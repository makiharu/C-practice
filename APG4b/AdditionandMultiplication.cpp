#include<iostream>
using namespace std;

int main() {
  int n, k, i = 0;
  int c = 1;
  cin >> n >> k;
  while(i < n) {
    if(c * 2 > c + k) {
      c += k;
    } else {
      c *= 2;
    }
    i++;
  }
  cout << c << endl;;
  return 0;
}