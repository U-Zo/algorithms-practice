#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N, num, cnt = 0;
	string str;

	cin >> N;
	num = 0;

	while (cnt != N) {
		num++;
		str = to_string(num);
		if (str.find("666") != string::npos) {
			cnt++;
		}
	}

	cout << str;

	return 0;
}