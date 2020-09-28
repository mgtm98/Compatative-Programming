#include <iostream>
#include <string>

using namespace std;

int main(){
    int length, number;
    string pass;
    cin >> length >> number;

    for(int a = 0; a < length; a++){
        pass += char(97 + (a%number));
    }

    cout << pass;

    return 0;
}