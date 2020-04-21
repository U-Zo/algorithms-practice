#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N = 0;
	int ans = 0;
	string str;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		str = to_string(i);
		sum = i;
		for (int j = 0; j < str.length(); j++) {
			sum += str[j] - '0';
		}

		if (sum == N && ans == 0) {
			ans = i;
		}
	}

	cout << ans;

	return 0;
}