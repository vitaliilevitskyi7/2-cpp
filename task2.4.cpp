#include <iostream>
#include <cmath>

// а) y = x^4 + 2x^2 + 1 = (x^2 + 1)^2
double poly_a(double x) {
    double x2 = x * x;
    return (x2 + 1) * (x2 + 1);
}

// б) y = x^4 + x^3 + x^2 + x + 1
double poly_b(double x) {
    return (((x + 1) * x + 1) * x + 1) * x + 1;
}

// в) y = x^5 + 5x^4 + 10x^3 + 10x^2 + 5x + 1 = (x + 1)^5
double poly_v(double x) {
    double xp1 = x + 1;
    double xp1_2 = xp1 * xp1;
    return xp1_2 * xp1_2 * xp1;
}

// г) y = x^9 + x^3 + 1
double poly_g(double x) {
    double x3 = x * x * x;
    return (x3 * x3 + 1) * x3 + 1;
}

// д) y = 16x^4 + 8x^3 + 4x^2 + 2x + 1
double poly_d(double x) {
    return (((16 * x + 8) * x + 4) * x + 2) * x + 1;
}

// е) y = x^5 + x^3 + x
double poly_e(double x) {
    double x2 = x * x;
    return ((x2 + 1) * x2 + 1) * x;
}

int main() {
    double x;
    std::cout << "Введіть x: ";
    std::cin >> x;

    std::cout << "а) " << poly_a(x) << "\n";
    std::cout << "б) " << poly_b(x) << "\n";
    std::cout << "в) " << poly_v(x) << "\n";
    std::cout << "г) " << poly_g(x) << "\n";
    std::cout << "д) " << poly_d(x) << "\n";
    std::cout << "е) " << poly_e(x) << "\n";

    return 0;
}
