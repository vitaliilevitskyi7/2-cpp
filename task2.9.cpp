#include <iostream>
#include <cmath>

int main() {
    // Константа Пі для переведення градусів у радіани
    const double PI = 3.14159265358979323846;

    double alpha, beta, gamma, r;

    std::cout << "Введіть три кути трикутника в градусах (через пробіл): ";
    std::cin >> alpha >> beta >> gamma;

    std::cout << "Введіть радіус вписаного кола r: ";
    std::cin >> r;

    // Переведення кутів з градусів у радіани
    double a_rad = alpha * PI / 180.0;
    double b_rad = beta * PI / 180.0;
    double g_rad = gamma * PI / 180.0;

    // Обчислення котангенсів половинних кутів: ctg(x) = 1.0 / tan(x)
    double ctg_a = 1.0 / std::tan(a_rad / 2.0);
    double ctg_b = 1.0 / std::tan(b_rad / 2.0);
    double ctg_g = 1.0 / std::tan(g_rad / 2.0);

    // Обчислення площі за формулою
    double S = r * r * (ctg_a + ctg_b + ctg_g);

    std::cout << "Площа трикутника S = " << S << std::endl;

    return 0;
}
