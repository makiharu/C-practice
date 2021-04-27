#include<iostream>
using namespace std;

int main() {
  int i = 1;
  int N;

  while(true) {
    cin >> N;
    if(N == 0) break;
    cout << "Case " << i << ": " << N << endl;
    i++;
  }
  return 0;
}
