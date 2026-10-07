#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    char minus = '-';        
    std::string number;

    std::cout << "\nВведите число: ";
    std::cin >> number;

    bool flag = false;   
    if (number.length() == 7) {
        for (size_t i = 0; i < number.length(); ++i) {
            if (number[i] == minus) {
                flag = true;
                break; 
            }
        }
    }

    if (number.length() == 6) {
        std::cout << "\nВаше число шестизначное\n";
    }
    else if (number.length() == 7 && flag) {
        std::cout << "\nВаше число шестизначное\n";
    }
    else {
        std::cout << "\nВаше число не шестизначное\n";
    }

    return 0;
}
