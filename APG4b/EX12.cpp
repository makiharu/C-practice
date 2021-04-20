#include<iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sl = S.size();
  int i=0 ;
  int c=1;

  for(i=0; i < sl; i ++) {
    if(i % 2 == 0) continue;
    if(S.at(i) == '+') {
      c+=1;
    } else {
      c-=1;
    }
  }
  cout << c << endl;
  return 0;

}