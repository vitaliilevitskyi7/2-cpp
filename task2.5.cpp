#include <iostream>

// Функція Розенброка
double Rosenbrock2d(double x, double y) {
    return 100 * (x * x - y) * (x * x - y) + (x - 1) * (x - 1);
}

int main() {
    // Перевірка на трьох парах дійсних чисел
    std::cout << "Пара (1, 1):   " << Rosenbrock2d(1.0, 1.0) << " (очікувано 0)\n";
    std::cout << "Пара (2, 3):   " << Rosenbrock2d(2.0, 3.0) << "\n";
    std::cout << "Пара (0.5, 2): " << Rosenbrock2d(0.5, 2.0) << "\n";

    return 0;
}
