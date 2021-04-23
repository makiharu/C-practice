#include<iostream>
using namespace std;

int main() {
  int a, b, c;
  int count = 0;
  cin >> a >> b >> c;
  for(int i =1; i <= c; i++) {
    if(c % i == 0) {
      if(c / i >= a && c /i <= b) count++; 
    }
  }
  cout << count << endl;
  return 0;
}