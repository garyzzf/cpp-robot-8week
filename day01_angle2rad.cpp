#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    double deg;
    std::cout << "请输入角度：";
    std::cin >> deg;

    double rad = deg * M_PI / 180.0;
    std::cout << "弧度 = " << rad << '\n';
    return 0;
}