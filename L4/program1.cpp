#include<cstdio>
using namespace std;

int main() {
  int a, b, t;
  a = 5;
  b = 8;

  t = a;
  a = b;
  b = t;

  printf("%d\n%d\n", a, b);
  return 0;
}