#include <iostream>

using namespace std;

int main(){
    long long number_of_queue, icecream, boys_left = 0;
    cin >> number_of_queue >> icecream;

    for(long long a = 0; a < number_of_queue; a++){
        char state;
        cin >> state;
        long long temp;
        cin >> temp;

        if(state == '+') icecream += temp;
        else if(state == '-'){
            if(temp > icecream) boys_left++;
            else icecream -= temp;
        }
    }

    cout << icecream << " " << boys_left;

    return 0;
}