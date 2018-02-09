#include <iostream>
using namespace std;

int main(){
    int n,a;
    cin >> n;
    int num[n];
    for(int j = 0; j < n; j++){
        cin >> a;
        num[j] = a;
    }
    for(int i = n-1; i >= 0; i--){
        if(i == 0) continue;
        cout << num[i] << " ";
    }
    cout << num[0];
    cout << endl;
    return 0;
}