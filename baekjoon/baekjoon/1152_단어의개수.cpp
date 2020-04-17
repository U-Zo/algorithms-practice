#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int cnt = 1;

	getline(cin, str);

	if (str.size() == 1 && str[0] == ' ') {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < str.size(); i++) {
		if (i == 0 && str[i] == ' ') {
			continue;
		}
		else if (i == str.size() - 1 && str[i] == ' ') {
			continue;
		}

		if (str[i] == ' ') {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}