#include <iostream>
using namespace std;

int main(){
    int n,b,f,r,v;
    int count[5][4][11];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 11; k++){
                count[i][j][k] = 0;
            }
        }
    }
    cin >> n;
    for(int l = 0; l < n; l++){
        cin >> b >> f >> r >> v;
        count[b][f][r] += v;
    }
    for(int m = 1; m < 5; m++){
        for(int n = 1; n < 4 ; n++){
            for(int p = 1; p < 11; p++){
                cout <<" "<< count[m][n][p];
            }
        cout << endl;
        }
        for(int q = 0; q < 20; q++){
            if(m == 4) break;
            cout << "#";
        }
        (m != 4) ? cout << endl : cout << "";
    }
    return 0;
}