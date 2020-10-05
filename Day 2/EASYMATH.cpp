#include <iostream>
#include <cmath>


using namespace std;

int DIV_BY(int number, int divBy){
    int t = number / divBy;
    cout << number << " div by " << divBy << " " << t << endl;
    return t;
}

int lcm(int a, int b){
    int min, max;
    if (a > b){
        min = b;
        max = a;
    }else{
        min = a;
        max = b;
    }
    int lcm = max;
    while(true){
        if(lcm % min == 0 && lcm % max == 0) break;
        else lcm++;
    }
    return lcm;
}

int get_div_by(int n, int a, int d){
    int div_by_a0 = DIV_BY(n, a);
    int div_by_a1 = DIV_BY(n, a + d);
    int div_by_a2 = DIV_BY(n, a + 2*d);
    int div_by_a3 = DIV_BY(n, a + 3*d);
    int div_by_a0a1 = DIV_BY(n, lcm(a, a+d));
    int div_by_a0a2 = DIV_BY(n, lcm(a, a+2*d));
    int div_by_a0a3 = DIV_BY(n, lcm(a, a+3*d));
    int div_by_a1a2 = DIV_BY(n, lcm((a+d),(a+2*d)));
    int div_by_a1a3 = DIV_BY(n, lcm((a+d), (a+3*d)));
    int div_by_a2a3 = DIV_BY(n, lcm((a+2*d),(2+3*d)));
    int div_by_a0a1a2 = DIV_BY(n, lcm(lcm(a, (a+d)), (a+2*d)));
    int div_by_a0a1a3 = DIV_BY(n, lcm(lcm(a, (a+d)), (a+3*d)));
    int div_by_a0a2a3 = DIV_BY(n, lcm(lcm(a, (a+2*d)), (a+3*d)));
    int div_by_a1a2a3 = DIV_BY(n, lcm(lcm((a+d), (a+2*d)), (a+3*d)));
    int div_by_a0a1a2a3 = DIV_BY(n, lcm(lcm(lcm(a, (a+d)), (a+2*d)), (a+3*d)));
    return div_by_a0 + div_by_a1 + div_by_a2 + div_by_a3 - div_by_a0a1 - div_by_a0a2
                        - div_by_a0a3 - div_by_a1a2 - div_by_a1a3 - div_by_a2a3 + div_by_a0a1a2 + 
                        + div_by_a0a2a3 + div_by_a0a1a3 + div_by_a1a2a3 - div_by_a0a1a2a3;
}

int compute(int n, int m, int a, int d){
    return get_div_by(m, a, d) - get_div_by(n - 1, a, d);
}

int main(){
    int number_of_inputs;
    cin >> number_of_inputs;
    for(int c = 0; c < number_of_inputs; c++){
        int n, m ,a, d;
        cin >> n >> m >> a >> d;
        cout << (m - n + 1) - compute(n, m, a, d);
    }
    return 0;
}