#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n = 0;
	int m = 0;
	int num = 0;

	cin >> n;
	m = n;
	num = 1;

	for (int i = 1; i < 9; i++) {
		cin >> n;
		if (m < n) {
			m = n;
			num = i + 1;
		}
	}

	cout << m << endl;
	cout << num << endl;

	return 0;
}