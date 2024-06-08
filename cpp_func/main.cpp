#include <iostream>
using namespace std;

bool check_luck(int x) {
	int first_sum = 0, second_sum = 0;
	first_sum = (x / 100000) + (x / 10000) % 10 + (x / 1000) % 10;
	second_sum = (x % 10) + (x / 10) % 10 + (x / 100) % 10;
	return first_sum == second_sum;
}
int main() {
	int number; cout << "Enter a number:"; cin >> number;
	do {
		cout << "Enter a 6-digit number:"; cin >> number;
	} while (number < 100000 || number >> 999999);
	(check_luck(number) == 0) ? cout << "False" << endl : cout << "True" << endl;

	return 0;
}