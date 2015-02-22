#include <iostream>
using std::cin;
using std::cout;

int main(){
	
	int doubleDigitValue(int);
	char digit;
	int oddLengthChecksum = 0;
	int evenLengthChecksum = 0;
	int position = 1;
	
	cout << "Enter a number: ";
	digit = cin.get();
	while (digit != 10) {
		if (position % 2 == 0) {
			oddLengthChecksum += doubleDigitValue(digit - '0');
			evenLengthChecksum += digit - '0';
		} else {
			oddLengthChecksum += digit - '0';
			evenLengthChecksum += doubleDigitValue(digit - '0');
		}
		digit = cin.get();
		position++;
	}
	int checksum;
	if ((position-1) % 2 == 0) checksum = evenLengthChecksum;
	else checksum = oddLengthChecksum;
	cout << "Checksum is " << checksum << ". \n";
	if (checksum % 10 == 0) {
		cout << "Checksum is divisible by 10. Valid. \n";
	} else {
		cout << "Checksum is not divisible by 10. Invalid. \n";
	}
	
	
	
	/* Check an even number length
	int checksum = 0;
	int position = 1;
	cout << "Enter a number with an even number of digits: \n";
	digit = cin.get();
	while (digit != 10) {
		if (position % 2 == 0) checksum += digit - '0';
			else checksum += doubleDigitValue(digit - '0');
		digit = cin.get();
		position++;
	}
	cout << "Checksum is " << checksum << ". \n";
	if (checksum % 10 == 0) {
		cout << "Checksum is divisible by 10. Valid. \n";
	} else {
		cout << "Checksum is not divisible by 10. Invalid. \n";
	}
	*/
	
	/* calculate a 6-digit luhn checksum
	int checksum = 0;
	cout << "Enter a six-digit number: ";
	for (int position = 1; position <= 6; position++) {
		cin >> digit;
		if (position % 2 == 0) checksum += digit - '0';
			else checksum += doubleDigitValue(digit - '0');
	}
	cout << "Checksum is " << checksum << ". \n";
	if (checksum % 10 == 0){
		cout << "Checksum is divisiable by 10. Valid. \n";
	} else {
		cout << "Checksum is not divisiable by 10. Invalid. \n";
	}
	*/
	
	/* Double a one char number
	char digit;
	cout << "Enter a one-digit number: ";
	cin >> digit;
	int sum = doubleDigitValue(digit - '0');
	cout << "Is the sum of digits " << sum << "? \n";
	*/
}

int doubleDigitValue (int digit){
	int doubledDigit = digit *2;
	int sum;
	if (doubledDigit >= 10) sum = 1+ doubledDigit % 10;
	else sum = doubledDigit;
	return sum;
}
	
