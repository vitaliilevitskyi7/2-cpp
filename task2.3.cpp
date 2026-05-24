#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введіть три сторони трикутника (a, b, c) через пробіл: ";
    std::cin >> a >> b >> c;

    // Обчислення півпериметру
    double p = (a + b + c) / 2.0;

    // Формула Герона
    double S = std::sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "Площа трикутника S = " << S << std::endl;

    return 0;
}
