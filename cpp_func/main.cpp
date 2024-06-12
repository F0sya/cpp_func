#include <iostream>
using namespace std;



void print_card(char card, char suit) {
	int horizontal_line = 196, vertical_line = 179, top_right = 191, top_left = 218, bottom_left = 192, bottom_right = 217;
	cout << char(top_left);
	for (int i = 0; i < 15; i++) {
		cout << char(horizontal_line);
	}
	cout << char(top_right) << endl;
	cout << char(vertical_line) << " " << card << "\t\t" << char(vertical_line) << endl;
	for (int i = 0; i < 4; i++) {
		cout << char(vertical_line) << "  \t\t" << char(vertical_line) << endl;
	}
	cout << char(vertical_line) << "\t" << suit << "\t" << char(vertical_line) << endl;
	for (int i = 0; i < 4; i++) {
		cout << char(vertical_line) << "  \t\t" << char(vertical_line) << endl;
	}
	cout << char(vertical_line) << "\t      " << card << " " << char(vertical_line) << endl;
	cout << char(bottom_left);
	for (int i = 0; i < 15; i++) {
		cout << char(horizontal_line);
	}
	cout << char(bottom_right);
}
int main() {
	char cards[9] = { '6','7','8','9','10','J','Q','K','A' };
	int cards_suit[4] = { 3,4,5,6 };
	int cards_input; cout << "Enter a index of card(0-8):" << endl; cin >> cards_input;
	int suit_input; cout << "Enter a index of suit(0-3)" << endl; cin >> suit_input;
	print_card(cards[cards_input], cards_suit[suit_input]);

	return 0;
}