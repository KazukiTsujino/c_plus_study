#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    long long sheat[101][101];
    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= c; j++){
            sheat[i][j] = 0;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> sheat[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sheat[i][c] += sheat[i][j];
        }
    }
    for(int j = 0; j <= c; j++){
        for(int i = 0; i < r; i++){
            sheat[r][j] += sheat[i][j];
        }
    }
    for(int k = 0; k <= r; k++){
        for(int l = 0; l <= c; l++){
            (l != c)?cout << sheat[k][l] << " ":cout << sheat[k][l];
        }
        cout << endl;
    }
    return 0;

}