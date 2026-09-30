#include <iostream>


void ymn_two_num() {
	std::cout << "\nЗадание 1:\n\t";
	int first_num = 0;
	int second_num = 0;
	std::cout << "Введите 2 числа: ";
	std::cin >> first_num, " ";
	std::cin >> second_num;
	std::cout << first_num * second_num;
}

void message() {
	std::cout << "\nЗадание 2:\n\t";
	std::cout << "Это сообщение из функции!";
}

void alert_nums() {
	std::cout << "\nЗадание 3:\n\t";
	for (int i = -19; i < 25; i++) {
		std::cout << i << " ";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	ymn_two_num();
	message();
	alert_nums();
}