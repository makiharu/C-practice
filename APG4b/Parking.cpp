#include<iostream>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  if(N * A > B) {
    cout << B << endl;
  } else {
    cout << N * A << endl;
  }
  return 0;
}