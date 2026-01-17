#include <iostream>
using namespace std;


int main() {
	
	int num, calc;
	cout << "num:";
	cin >> num;
	
	calc = num % 2;
	if (calc == 0) {
		cout << "Even number";
		
	}
	if (calc != 0) {
		cout <<"Odd number";
	}
	
	return 0;

}
