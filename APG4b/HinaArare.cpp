#include<iostream>
using namespace std;

int main() {
  int n;
  string str;
  cin >> n;
  int i = 0;
  while(i < n) {
    cin >> str;
    if(str == "Y") {
      cout << "Four" << endl;
      break;
    } 
    if(i == (n - 1)) {
      cout << "Three" << endl;
    }
    i++;
  }

  return 0;
}