#include<iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int i = s.size();
  s = s.at(i-1);
  if(s == "T") {
    puts("YES");
  } else {
    puts("NO");
  }
  return 0;
}