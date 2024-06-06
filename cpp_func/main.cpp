#include <iostream>
using namespace std;



int max(int x, int y) {
	int result;
	(x < y) ? result = y : result = x;
	return result;
}
int main() {
	int first_number; cout << "Enter an first number:"; cin >> first_number;
	int second_number; cout << "Enter an second number:"; cin >> second_number;

	cout << max(first_number, second_number) << endl;
	return 0;
}