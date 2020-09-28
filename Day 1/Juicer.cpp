#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number_of_oranges, max_size, empty_cond;
    cin >> number_of_oranges >> max_size >> empty_cond;

    vector<int> oranges (number_of_oranges);

    for(int a = 0; a < number_of_oranges; a++) cin >> oranges[a];

    int current_size = 0;
    int empty = 0;
    
    for(int a = 0; a < number_of_oranges; a++){
        if(oranges[a] <= max_size) current_size += oranges[a];
        if(current_size > empty_cond){
            empty++;
            current_size = 0;
        }
    }

    cout << empty;

    return 0;
}