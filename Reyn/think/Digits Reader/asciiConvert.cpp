#include <iostream>
using std::cin;
using std::cout;

int main() {
	char upperConvert(int);
	char lowerConvert(int);
	char symbolConvert(int);
		
	cout << "Enter a number 1-8: ";
	int number;
	cin >> number;
	char outputCharacter;
	outputCharacter = symbolConvert(number);
	cout << "Equivalent symbol: " << outputCharacter << "\n";
	
}

char upperConvert(int num) {
	return num + 'A' - 1;
}

char lowerConvert(int num) {
	return num + 'a' - 1;
}

char symbolConvert(int num) {
	switch (num) {
		case 1: return '!';
		case 2: return '?';
		case 3: return ',';
		case 4: return '.';
		case 5: return ' ';
		case 6: return ';';
		case 7: return '"';
		case 8: return '\'';
	}
}
