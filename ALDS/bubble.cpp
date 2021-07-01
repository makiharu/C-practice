#include<iostream>
using namespace std;

int main() {
  int A[100], N, sw;
  cin >> N;
  for(int i = 0; i < N; i ++) cin >> A[i];


  for(int i = 0; i < N; i ++) {
    if(i) cout << " ";
    cout << A[i];
  }

  cout << endl;
  cout << sw << endl;
  return 0;
}