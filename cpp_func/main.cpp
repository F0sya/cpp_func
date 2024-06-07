#include <iostream>
using namespace std;



bool check(int x) {
	int sum = 0;
	for (int i = 1; i <= x / 2; i++) {
		if (x % i == 0) {
			sum += i;
		}
	}
	return sum == x;
}

void perfect(int x, int y) {
	int result = 0;
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}
	for (int i = x; i <= y; i++) {
		if (check(i)) {
			cout << i << " ";

		}
	}
	cout << endl;
}
int main() {
	int left_limit; cout << "Enter an first number:"; cin >> left_limit;
	int right_limit; cout << "Enter an second number:"; cin >> right_limit;

	perfect(left_limit, right_limit);
	return 0;
}