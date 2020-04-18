#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int num = 0;
	int answer = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'Z') {
			num = 7;
		}
		else if (str[i] > 'R') {
			num = ((int)str[i] - 'A' - 1) / 3;
		}
		else {
			num = ((int)str[i] - 'A') / 3;
		}
		answer += (num + 3);
	}

	cout << answer;

	return 0;
}