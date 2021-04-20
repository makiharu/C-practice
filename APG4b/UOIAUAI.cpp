#include<iostream>
using namespace std;

int main() {
  char s;
  cin >> s;
  int c = 0;
  string vowel = "aeiou";
  
  for(int i = 0; i < vowel.size(); i ++) {
    if(vowel.at(i) == s) c++;
  }

  if(c >= 1) {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }

  return 0;
}