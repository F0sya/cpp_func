#include <iostream>
using namespace std;



int cube(int x) {
	int multiplier = 1;
	for (int i = 0; i < 3; i++) {
		multiplier *= x;
	}
	return multiplier;
}
int main() {
	int number; cout << "Enter a number:"; cin >> number;
	
	cout << cube(number) << endl;
	return 0;
}