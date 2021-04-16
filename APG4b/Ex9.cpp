#include <iostream>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  x = x * (a + b);
  cout << x << endl;
  // 3.
  x *= x;
  cout << x << endl;
  // 3.
  x -= 1;
  cout << x << endl;

}