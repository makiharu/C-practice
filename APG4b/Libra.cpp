#include<iostream>
using namespace std;

int main() {
  int L, R, A, B, C, D;
  cin >> A >> B >> C >> D;
  L = A + B;
  R = C + D;
  
  if(L > R) {
    cout << "Left" << endl;
  } else if(L == R) {
    cout << "Balanced" << endl;
  } else {
    cout << "Right" << endl;
  }
  return 0;
}