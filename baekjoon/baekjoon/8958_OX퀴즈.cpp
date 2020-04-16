#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	int T = 0;
	char str[80];
	unsigned int sum = 0;
	unsigned int p = 1;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> str;

		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'O') {
				sum += p;
				p++;
			}
			else if (str[j] == 'X') {
				p = 1;
			}
		}
		cout << sum << endl;
		sum = 0;
		p = 1;
	}

	return 0;
}