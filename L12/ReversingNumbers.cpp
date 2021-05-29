#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a;
  int arr[n];
  for(int i = 0; i < n; i ++) {
    cin >> a;
    arr[i] = a;
  }

  for(int i = n; i >= 0; i --) {
    cout << arr[i];
    if(i != 0) cout << " ";
    else cout << endl;
  }
  return 0;
}