#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a, b, c;
	int mul = 0;
	int arr[10] = { 0, };
	int temp = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;

	mul = a * b * c;

	string str;
	str = to_string(mul);

	cout << str[0];

	for (int i = 0; i < str.length(); i++) {
		temp = str[i] - '0';
		arr[temp] = arr[temp] + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}