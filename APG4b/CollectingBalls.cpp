#include<iostream>
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