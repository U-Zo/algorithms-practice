#include <iostream>
using namespace std;

int fac(int);

int main(void) {
	int num = 0;

	cin >> num;

	cout << fac(num);

	return 0;
}

int fac(int num) {
	if (num < 2) {
		return 1;
	}

	return num * fac(num - 1);
}