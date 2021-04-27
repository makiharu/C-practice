#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int data[n];
  for(int i = 0; i < n; i ++) {
    int a;
    cin >> a;
    data[i] = a;
  }

  for(int i = n - 1; i >= 0; i--) {
    cout << data[i];
    if(i != 0) {
      cout << " ";
    } else {
      cout << endl;
    }
  }

  return 0;
}