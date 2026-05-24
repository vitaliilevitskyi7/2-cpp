#include <iostream>
#include <cmath>

// Функція для підрахунку довжини відрізка між двома точками
double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Функція обчислення площі за координатами трьох вершин
double triangle_area(double xa, double ya, double xb, double yb, double xc, double yc) {
    double a = distance(xb, yb, xc, yc);
    double b = distance(xa, ya, xc, yc);
    double c = distance(xa, ya, xb, yb);
    
    // Півпериметр
    double p = (a + b + c) / 2.0;
    // Формула Герона
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, ya, xb, yb, xc, yc;

    std::cout << "Введіть координати точки A (x y): ";
    std::cin >> xa >> ya;

    std::cout << "Введіть координати точки B (x y): ";
    std::cin >> xb >> yb;

    std::cout << "Введіть координати точки C (x y): ";
    std::cin >> xc >> yc;

    double area = triangle_area(xa, ya, xb, yb, xc, yc);
    std::cout << "Площа трикутника: " << area << std::endl;

    return 0;
}
