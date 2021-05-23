#include<iostream>
using namespace std;

int main() {
  int n,b,f,r,v;
  int c[4][3][10];

  for(int i=0;i<4;i++) {
    for(int j=0;j<3;j++) {
      for(int k=0;k<10;k++) {
        c[i][j][k]=0;
      }
    }
  }
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>b>>f>>r>>v;
    c[b][f][r]+=v;
  }

  for(int i=1;i<=4;i++) {
    if(i>=1) cout << "####################" <<endl;
    for(int j=0;j<=3;j++) {
      for(int k=0;k<=10;k++) {
        cout << " " << c[b][f][r];
      }
    }
    cout << endl;
  }

  return 0;
}

