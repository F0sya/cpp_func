#include <iostream>
using namespace std;



double power(int x, int y) {
	double multiplier = 1.0;
	bool check = (y < 0);

	if (check) {
		y = -y;
	}

	for (int i = 0; i < y; i++) {
		multiplier *= x;
	}
	if (check) {
		multiplier = 1.0 / multiplier;
	}
	return multiplier;
}
int main() {
	int number; cout << "Enter a number:"; cin >> number;
	int pow; cout << "Enter a power:"; cin >> pow;

	cout << power(number,pow) << endl;
	return 0;
}