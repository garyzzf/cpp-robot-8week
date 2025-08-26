#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const double step = 30.0;
    for (double deg = 0.0; deg <= 360.0; deg += step) {
        if (deg == 180.0) {
            std::cout << "[跳过 180°]\n";
            continue;
        }
        double rad = deg * M_PI / 180.0;
        std::cout << "角度=" << std::setw(3) << deg
                  << "°  弧度=" << rad << '\n';
    }
    return 0;
}