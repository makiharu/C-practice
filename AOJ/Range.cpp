#include<iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  (a < b && b < c)?puts("Yes"):puts("No");
  return 0;
}