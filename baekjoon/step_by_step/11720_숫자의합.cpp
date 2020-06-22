#include <iostream>
using namespace std;

int main(void) {
	int num = 0;
	int sum = 0;
	char arr[101];

	cin >> num;
	cin >> arr;

	for (int i = 0; i < num; i++) {
		arr[i] = arr[i] - '0';
		sum += arr[i];
	}

	cout << sum << endl;

	return 0;
}