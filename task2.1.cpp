#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Введіть дійсне число x (в радіанах): ";
    std::cin >> x;

    double result = std::cos(x);
    std::cout << "cos(" << x << ") = " << result << std::endl;

    return 0;
}
