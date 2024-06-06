#include <iostream>
using namespace std;



bool check(int x) {
	bool result;
	(x < 0) ? result = false : result = true;
	return result;
}
int main() {
	int number; cout << "Enter a number:"; cin >> number;
	if (number == 0) {
		cout << "It's zero" << endl;
		return 0;
	}
	(check(number) == 1) ? cout << "True" << endl : cout << "False" << endl;
	return 0;
}