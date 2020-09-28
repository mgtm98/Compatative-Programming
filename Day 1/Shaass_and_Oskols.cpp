#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number_of_wires = 0;
    cin >> number_of_wires;
    
    vector<int> wires (number_of_wires);
    for(int a = 0; a < number_of_wires; a++){
        cin >> wires[a];
    }

    int shots = 0;
    cin >> shots;

    for(int a = 0; a < shots; a++){
        int x, y, right, left;
        cin >> x >> y;
        x--;
        right = y - 1;
        left = wires[x] - y;
        wires[x] = 0;
        if(x-1 >= 0) wires[x-1] += right;
        if(x+1 < number_of_wires) wires[x+1] += left;
    }

    for(int a = 0; a < number_of_wires; a++){
        cout << wires[a] << endl;
    }

    return 0;
}