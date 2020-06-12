#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void swap(char* str) {
	char tmp[4];

	strcpy_s(tmp, str);

	for (int i = 0; i < 3; i++) {
		str[i] = tmp[2 - i];
	}
}

int comp(char* a, char* b) {
	int _a = atoi(a);
	int _b = atoi(b);

	if (_a > _b)
		return _a;
	else if (_a < _b)
		return _b;
	else
		return 0;
}

int main(void) {
	char a[4];
	char b[4];

	cin >> a;
	cin >> b;

	swap(a);
	swap(b);

	cout << comp(a, b) << endl;

	return 0;
}