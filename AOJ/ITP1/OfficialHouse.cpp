#include<iostream>
using namespace std;

int main() {
  int n,b,f,r,v;
  int c[5][4][11];

  for(int i=1;i<=4;i++) {
    for(int j=1;j<=3;j++) {
      for(int k=1;k<=10;k++) {
        c[i][j][k]=0;
      }
    }
  }

  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>b>>f>>r>>v;
    c[b][f][r]+=v;
  }

  for(int p=1; p<=4; p ++) {
    if(p > 1) cout << "####################\n";
    for(int q =1; q <= 3; q++) {
      for(int s = 1; s <= 10; s ++) {
        cout << " " << c[p][q][s];
      }
      cout << endl;
    }
  }
  return 0;
}

