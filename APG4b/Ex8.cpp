#include <iostream>
using namespace std;

//補足：この問題について、
//pについては、1か2以外のパターンを考えなくてよかった
int main() {
  int p, price, N;
  string text;
  cin >> p;

  // パターン1
  if (p == 1) {
    cin >> price >> N;
    cout << price * N << endl;
  } else if(p == 2) {
    cin >> text >> price;
    cin >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  } else {
  }

  
}
