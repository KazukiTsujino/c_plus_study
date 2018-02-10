#include <iostream>
using namespace std;

int main(){
    bool cards[4][14];
    int n,rank;
    char mark;
    for(int s = 0; s < 4; s++){
        for(int r = 1; r <= 13; r++){
            cards[s][r] = 0;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> mark >> rank;
        if(mark == 'S') cards[0][rank] = 1;
        if(mark == 'H') cards[1][rank] = 1;
        if(mark == 'C') cards[2][rank] = 1;
        if(mark == 'D') cards[3][rank] = 1;
    }
    for(int j = 0; j < 4; j++){
        for(int k = 1; k <=13; k++){
            if(cards[j][k]) continue;
            if(j == 0) cout << "S " << k << endl;
            if(j == 1) cout << "H " << k << endl; 
            if(j == 2) cout << "C " << k << endl; 
            if(j == 3) cout << "D " << k << endl;  
        }
    }
    return 0;
}