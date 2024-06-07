#include <iostream>
using namespace std;



int sum(int x, int y) {
	int result = 0;
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}
	for (int i = x+1; i < y; i++) {
		result += i;
	}
	return result;
}
int main() {
	int first_number; cout << "Enter an first number:"; cin >> first_number;
	int second_number; cout << "Enter an second number:"; cin >> second_number;


	cout << sum(first_number, second_number) << endl;
	return 0;
}