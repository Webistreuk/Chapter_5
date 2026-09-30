#include <iostream>

int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; ++i)
        res *= base;
    return res;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int base, exp;
    std::cout << "Основание: ";
    std::cin >> base;
    std::cout << "Степень: ";
    std::cin >> exp;

    if (exp < 0)
        std::cout << "Считаем отрицательные степеи.\n";
    else
        std::cout << base << " в степени " << exp << " = " << power(base, exp);

    return 0;
}