#include <iostream>
using namespace std;

int fib(int);

int main(void) {
	int input = 0;
	
	cin >> input;
	cout << fib(input);

	return 0;
}

int fib(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;

	return fib(num - 1) + fib(num - 2);
}