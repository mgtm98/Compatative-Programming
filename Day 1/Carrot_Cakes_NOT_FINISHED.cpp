#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number_of_cakes, oven_time, cakes_per_oven, build_time;
    cin >> number_of_cakes >> oven_time >> cakes_per_oven >> build_time;
    
    int number_of_bakes = ceil((float)number_of_cakes / cakes_per_oven);
    
    int time = 0;
    int oven1_ready = 0;
    bool oven1_finish = false;
    bool oven2_finish = false;
    int oven2_ready = build_time;

    while(true){
        cout << "at time " << time;
        if(oven1_ready == time){
            if(number_of_bakes > 0){
                oven1_ready += oven_time;
                number_of_bakes--;
                cout << "at time " << time << " oven 1 bakes\n";
            }else{
                oven1_finish = true;
            }
        }
        if(oven2_ready == time && number_of_bakes > 0){
            if(number_of_bakes > 0){
                oven2_ready += oven_time;
                number_of_bakes--;
                cout << "at time " << time << " oven 2 bakes\n";
            }else{
                oven2_finish = true;
            }
        }
        if(oven1_finish && oven2_finish) break;
        time++;
    }

    if(time < number_of_bakes*oven_time) cout << "YES";
    else cout << "NO";

}