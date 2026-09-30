#include <iostream>
#include <cmath>
#include <locale>

double getAbsoluteValue(double number) {
    if (number < 0) {
        return -number;
    }
    else {
        return number;
    }
}

int main() {
    std::setlocale(LC_ALL, "Russian");

    double num1;
    double num2;

    std::cout << "Введите два вещественных числа ниже:\n";
    std::cin >> num1 >> num2;

    double positive_num1 = getAbsoluteValue(num1);
    double positive_num2 = getAbsoluteValue(num2);

    double sum = num1 + num2;
    double positive_sum = getAbsoluteValue(sum);

    std::cout << "Модуль первого числа: |" << num1 << "| = " << positive_num1 << "\n";
    std::cout << "Модуль второго числа: |" << num2 << "| = " << positive_num2 << "\n";
    std::cout << "Сумма модулей: |" << num1 << "| + |" << num2 << "| = "
        << (positive_num1 + positive_num2) << "\n";
    std::cout << "Модуль суммы: |" << sum << "| = " << positive_sum << "\n";

    return 0;
}
