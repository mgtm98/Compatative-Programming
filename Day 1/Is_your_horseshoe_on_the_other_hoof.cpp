#include <iostream>
#include <set>

int main(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::set<int> colors;
    colors.insert(a);
    colors.insert(b);
    colors.insert(c);
    colors.insert(d);

    std::cout << 4 - colors.size();

    return 0;
}