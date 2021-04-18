#include<iostream>
using namespace std;

int main() {
  int N, m, n;
  cin >> N;
  int sum = 0;
  for(int i = 0; i < N; i ++) {
    cin >> m >> n;
    sum += (n - m) + 1;
  }
  cout << sum << endl;
  return 0;
}