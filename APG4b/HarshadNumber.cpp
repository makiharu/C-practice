#include<iostream>
using namespace std;
int N;
int main() {
  //ハーシャッド数
  scanf("%d", &N);
  int t =N, c = 0;
  while(t > 0) c += t % 10, t /= 10;
  if(N % c == 0) puts("Yes");
  else puts("No");

}