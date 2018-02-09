#include <iostream>
using namespace std;

bool has3(int x){
    while(x){
    if(x % 10 == 3) return true;
    x /= 10;
    } 
    return false;
}
void call(int n){
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || has3(i)){
            cout << " " << i;
        } 
    }
     cout << endl;
}

int main(){
    int n;
    cin >> n;
    call(n);
    return 0;
}