#include <iostream>
using namespace std;


void rect(int x, int y) {
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
int main() {
	int width; cout << "Enter a width:"; cin >> width;
	int height; cout << "Enter a height:"; cin >> height;

	rect(width, height);
}