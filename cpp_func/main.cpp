#include <iostream>
using namespace std;

bool prime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;

}

int main() {
	int number; cout << "Enter a number:"; cin >> number;

	if (prime(number) == true) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Non prime" << endl;
	}
	return 0;
}