#include <iostream>
using namespace std;

int main() {
  int p, price, N;
  string text;
  cin >> p;

  // パターン1
  if (p == 1) {
    cin >> price;
    cout << price * N << endl;
  } else if(p == 2) {
    cin >> text >> price;
    cin >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  } else {
  }

  
}
