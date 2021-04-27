#include<iostream>
using namespace std;

int main() {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  int range_x = x + r <= W && x - r >= 0;
  int range_y = y + r <= H && y - r >= 0;

  if(range_x && range_y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}