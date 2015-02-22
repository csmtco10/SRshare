#include <iostream>
using std::cin;
using std::cout;

int main () {
	int convertdd(int, char);
	char digit = 0;
	int overallNumber = 0;
	
	cout << "Enter a number: ";
	
	digit = cin.get();
	while (digit != 10){
		overallNumber = convertdd(overallNumber, digit - '0');
		digit = cin.get();	
	}
	cout << "That number as an integer: " << overallNumber << "\n";
}

int convertdd(int overall, char digit){
	int total = overall * 10;
	total += digit;
	return total;
}
