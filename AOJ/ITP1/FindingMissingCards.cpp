#include <iostream>
using namespace std;

int main(){
    int res[4][13],n,c;
    char m;
    
    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j < 13 ; j++)
            res[i][j] = 0;
    
    
    cin >> n;
    while(n--){
        cin >> m >> c;
        if(m == 'S') res[0][c-1] = 1;
        else if(m == 'H') res[1][c-1] = 1;
        else if(m == 'C') res[2][c-1] = 1;
        else res[3][c-1] = 1;
    }
    
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 13 ; j++){
            if(!res[i][j]){
                if(i == 0) cout << 'S' << ' ' << j+1 << endl;
                else if(i == 1) cout << 'H' << ' ' << j+1 << endl;
                else if(i == 2) cout << 'C' << ' ' << j+1 << endl;
                else cout << 'D' << ' ' << j+1 << endl;
            }
            
        }
    }
  
    return 0;
}