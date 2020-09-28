#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    string input, output = "";
    getline(cin, input);

    map<char, int> numbers;
    numbers['1'] = 0;
    numbers['2'] = 0;
    numbers['3'] = 0;

    for(size_t a = 0; a < input.size(); a++){
        if(input[a] == '1') numbers['1']++;
        else if(input[a] == '2') numbers['2']++;
        else if(input[a] == '3') numbers['3']++; 
    }

    for(int a = 0; a < numbers['1']; a++) output += "1+";
    for(int a = 0; a < numbers['2']; a++) output += "2+";
    for(int a = 0; a < numbers['3']; a++) output += "3+";

    output = output.substr(0, output.size() - 1);

    cout << output;

    return 0;
}