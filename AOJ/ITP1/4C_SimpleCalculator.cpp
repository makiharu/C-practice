#include<iostream>
using namespace std;

int main() {
  int a, b;
  char op;

  while(true) {
    cin >> a >> op >> b;
    if(op == '+') cout << a + b << endl;
    if(op == '-') cout << a - b << endl;
    if(op == '*') cout << a * b << endl;
    if(op == '/') cout << a / b << endl;
    if(op == '?') return 0;
    }
  }