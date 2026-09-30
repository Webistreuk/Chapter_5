#include <iostream>
#include <locale>

void printSum(int num) {
    int sum = 0;
    for (int i = 0; i <= num; ++i) {
        sum += i;
    }
    std::cout << "Сумма чисел от 0 до " << num << ": " << sum << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int num = 0;
    std::cout << "Введите число, до которого будем считать: ";
    std::cin >> num;

    printSum(num);

    return 0;
}