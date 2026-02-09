#include <iostream>

int main() {
	setlocale(0, "");
	
	unsigned short choice; std::cin >> choice;
	if (choice == 1) {
		std::cout << "Сейчас лето, следует одеться по легче.\n";
	}
	else if (choice == 2) {
		std::cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.\n";
	}
	else if (choice == 3) {
		std::cout << "Сейчас зима, следует одеться теплее.\n";
	}
	else if (choice == 4) {
		std::cout << "Сейчас весна, следует одеться по легче и резиновые сапожки.\n";
	}
	else {
		std::cout << "ОШИБКА!!!!!!!!!!.";
	}
}