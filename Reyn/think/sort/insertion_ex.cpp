#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;

int main (){
	const int ARRAY_SIZE = 10;
	int intArray[ARRAY_SIZE] = {87,28,100,78,84,98,75,70,81,68};
	int start = 0;
	int end = ARRAY_SIZE - 1;
	for (int i = start +1; i <= end; i++) {
		for (int j = i; j > start && intArray[j-1] > intArray[j]; j--) {
			int temp = intArray[j-1];
			intArray[j-1] = intArray[j];
			intArray[j] = temp;
		}
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << intArray[i];
			if (i != ARRAY_SIZE - 1) cout << ", ";
		}
	
		cout << "\n";
	}


	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << intArray[i];
		if (i != ARRAY_SIZE - 1) cout << ", ";
	}
	
	cout << "\n";
}
