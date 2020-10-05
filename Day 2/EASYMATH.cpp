#include <iostream>
#include <cmath>


using namespace std;

int DIV_BY(int number, int divBy){
    int t = number / divBy;
    // cout << number << " div by " << divBy << " " << t << endl;
    return t;
}

int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;
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
    return (min * max) / gcd(max, min);
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
    int div_by_a2a3 = DIV_BY(n, lcm((a+2*d),(a+3*d)));
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
    int m_result = get_div_by(m, a, d);
    int n_result = get_div_by(n - 1, a, d);
    // cout << "numbers div by " << m << " are " << m_result << endl;
    // cout << "numbers div by " << n << " are " << n_result << endl;
    return m_result - n_result;
}

int main(){
    int number_of_inputs;
    cin >> number_of_inputs;
    for(int c = 0; c < number_of_inputs; c++){
        int n, m ,a, d;
        cin >> n >> m >> a >> d;
        cout << m - n + 1 - compute(n, m, a, d);
    }
    return 0;
}