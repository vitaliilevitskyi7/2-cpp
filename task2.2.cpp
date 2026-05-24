#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введіть катети трикутника a та b через пробіл: ";
    std::cin >> a >> b;

    // std::hypot(a, b) автоматично обчислює sqrt(a*a + b*b)
    double c = std::hypot(a, b);
    std::cout << "Гіпотенуза c = " << c << std::endl;

    return 0;
}
