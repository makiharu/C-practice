#include<iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  double c = (double)a / (double)b;

  printf("%d %1d", a / b, a % b);
  printf(" ");
  printf("%f\n" , c); 

  return 0;
}