#include <iostream>
#include <cmath>

bool is_integer(float k){
  return std::floor(k) == k;
}

int main(){
    float price, coin;
    std::cin >> price;
    std::cin >> coin;
    
    float number_of_shovels = 1;
    int a = 0;

    while(true){
        a = price * number_of_shovels;
        if(coin == a%10 || a%10 == 0){
            std::cout << number_of_shovels;
            break;
        }else{
            number_of_shovels++;
        }
    }
    return 0;
}