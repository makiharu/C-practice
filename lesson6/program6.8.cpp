#include<iostream>
using namespace std;

//cinによる入力
//cin: ユーザー入力に使用される標準入力用のオブジェクト
int main() {
  int a, b, c;
  cin >> a >> b;
  c = a + b;
  cout << a << "+" << b << "=" << c << endl;

  return 0;
}