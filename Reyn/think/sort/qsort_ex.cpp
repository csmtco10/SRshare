#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;

int main () {
	int compareFunc(const void *, const void *);
	const int ARRAY_SIZE = 10;
	int intArray[ARRAY_SIZE] = {87,28,100,78,84,98,75,70,81,68};
	
	qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc);


	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << intArray[i];
		if (i != ARRAY_SIZE - 1) cout << ", ";
	}
	
	cout << "\n";	
	
}

int compareFunc(const void * voidA, const void *voidB) {
	int * intA = (int *)(voidA);
	int * intB = (int *)(voidB);
	return *intA - *intB;
}
	
	
