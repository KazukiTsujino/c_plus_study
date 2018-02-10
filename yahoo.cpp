#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[3] == s[4] && s[0] == 'y' && s[1] == 'a' && s[2] == 'h'){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
