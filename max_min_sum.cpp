#include <iostream>
using namespace std;

int main(){
    int n;
    long long maxValue = -1000000;
    long long minValue = 1000000;
    long long sum = 0;
    long long a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(maxValue <= a) maxValue = a;
        if(minValue >= a) minValue = a;
        sum += a;
    }
    cout << minValue << " " << maxValue << " " << sum << endl;

    return 0;
}