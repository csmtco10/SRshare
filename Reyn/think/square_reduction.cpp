#include <iostream>
using std::cin;
using std::cout;

int main(){

	for(int i=1;i<5;i++){
		for(int x=5;x>(5-i);x--){
			cout << "#";
		}
		cout << "\n";
	}
	
	for(int i=0;i<5;i++){
		for(int x=0;x<(5-i);x++){
			cout << "#";
		}
		cout << "\n";
	}
}
		
