#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<double> v(6);
    std::cout << "输入 6 个角(空格分隔):";
    for (double &x : v) std::cin >> x;
    double avg = std::accumulate(v.begin(), v.end(), 0.0) / v.size();
    std::cout << "平均 = " << avg << "°\n";
}