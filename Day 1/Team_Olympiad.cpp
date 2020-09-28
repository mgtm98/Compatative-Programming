#include <iostream>
#include <vector>

using namespace std;

int main(){
    int children_number;
    int teams_number = 0;
    string teams = "";

    vector<int> mathematician;
    vector<int> programmer;
    vector<int> sportsman;

    cin >> children_number;

    for(int a = 0; a < children_number; a++){
        int temp;
        cin >> temp;
        if(temp == 1) programmer.push_back(a);
        else if(temp == 2) mathematician.push_back(a);
        else if(temp == 3) sportsman.push_back(a);
    }

    while(mathematician.size() > 0 && programmer.size() > 0 && sportsman.size() > 0){
        teams_number ++;
        teams += to_string(mathematician[mathematician.size() - 1] + 1) + " ";
        teams += to_string(programmer[programmer.size() - 1] + 1) + " ";
        teams += to_string(sportsman[sportsman.size() - 1] + 1) + " \n";
        sportsman.pop_back();
        programmer.pop_back();
        mathematician.pop_back();
    }

    cout << teams_number << endl;
    cout << teams;
    
    return 0;
}