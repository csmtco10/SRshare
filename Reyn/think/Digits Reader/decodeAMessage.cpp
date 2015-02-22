#include <iostream>
using std::cin;
using std::cout;


int main() {
	int convertdd(int, char);
	char upperConvert(int);
	char lowerConvert(int);
	char symbolConvert(int);
	
	char digit = 0;
	char outputChar;
	enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
	modeType mode = UPPERCASE;
	
	cout << "Enter a code: ";
	do {
		digit = cin.get();
		int number = 0;
		while ((digit != 10) && (digit != ',')){
			number = convertdd(number, digit - '0');
			digit = cin.get();	
		}
		switch (mode) {
			case UPPERCASE:
				number = number % 27;
				outputChar = upperConvert(number);
				if (number == 0) {
					//cout << "Switch to LOWERCASE";
					mode = LOWERCASE;
					continue;
				}
				break;
			case LOWERCASE:
				number = number % 27;
				outputChar = lowerConvert(number);
				if (number == 0) {
					//cout << "Switch to PUNCTUATION";
					mode = PUNCTUATION;
					continue;
				}
				break;
			case PUNCTUATION:
				number = number % 9;
				outputChar = symbolConvert(number);
				if (number == 0) {
					//cout << "Switch to UPPERCASE";
					mode = UPPERCASE;
					continue;
				}
				break;
		}
		cout << outputChar;
	} while (digit != 10);
	cout << "\n";

}

int convertdd(int overall, char digit){
	int total = overall * 10;
	total += digit;
	return total;
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
