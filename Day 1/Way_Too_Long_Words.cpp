#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int input_number = 0;
    cin >> input_number;

    vector<string> inputs (input_number);

    for(int i = 0; i < input_number; i++) cin >> inputs[i];

    for(int i = 0; i < input_number; i++){
        if(inputs[i].size() <= 10) cout << inputs[i] << endl;
        else cout << inputs[i][0] << inputs[i].size()-2 << inputs[i][inputs[i].size()-1] << endl;
    }

    return 0;
}