#include<iostream>
using namespace std;

//三つの整数を小さい順に並び替え
int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  int min = a1;
  int t;
  if(a2 < a1) {
    t = a2;
    a2 = a1;
    a1 = t;
  } 
  if(a3 < a2) {
    t = a3;
    a3 = a2;
    a2 = t;
  }

  if(a2 < a1) {
    t = a1;
    a1 = a2;
    a2 = t;
  }
  cout << a1 << " " << a2 << " " << a3 << endl;
  return 0;
}