#include<iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
  string a, b, c;
  for(int i = 0; i < 3; i ++) {
    string s;
    cin >> s;  
    s = toupper(s.at(0));
    cout << s.at(0);
  }
  cout << endl;
  return 0;
}