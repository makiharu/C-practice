#include<iostream>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;// true または false
  bool c = true;// true または false
 
  // ここから先は変更しないこと
 
  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }
 //false aがfalseかつbがtrue
  if (!a && b) {
    cout << "Bo";
  }
  //true  
  else if (!b || c) {
    cout << "Co";
  }
 
  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  //true
  else if (!a || c) {
    cout << "der";
  }
 
  cout << endl;
}