#include <iostream>
#include <string>

int main(){
    std::string stones, instructions;
    std::cin >> stones >> instructions;

    int stone_index = 0;

    for(int a = 0; a < instructions.length(); a++){
        if(instructions[a] == stones[stone_index]){
            stone_index++;
        }
    }
    std::cout << stone_index + 1;
    return 0;
}