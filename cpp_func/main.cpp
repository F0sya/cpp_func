#include <iostream>
using namespace std;


int factorial(int x) {
	int multiplier = 1;
	for (int i = 1; i <= x; i++) {
		multiplier *= i;
	}
	return multiplier;
}
int main() {
	int number; cout << "Enter a number:"; cin >> number;
	
	cout << factorial(number) << endl;
}