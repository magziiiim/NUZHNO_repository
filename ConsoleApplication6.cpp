#include <iostream>

int main() {
	setlocale(0, "");

	unsigned short choice; std::cout << "Your integer: "; std::cin >> choice;
	if (choice < 101) {
		short tens = ((choice / 10) % 10);
		
		if (choice == 0) {
			std::cout << "your number in a range of: 0 - 10\n";
		}
		else if (choice == 100) {
			std::cout << "your number in a range of: 91 - 100\n";
		} else if (choice % 10 == 0) {
			std::cout << "your number in a range of: " << (tens-1) * 10 + 1 << " - " << tens * 10 << "\n";
			return 0;
		}
		else {
			std::cout << "your number in a range of: " << tens * 10 + 1 << " - " << (tens + 1) * 10 << "\n";
		}
		
		return 0;
	}

	std::cout << "Out of range";
	return 0;
}