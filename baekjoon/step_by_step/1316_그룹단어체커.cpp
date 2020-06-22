#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	int N = 0;
	string str;
	vector<char> v(26);
	int ans = 0;
	int strLen = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		strLen = str.size();

		if (strLen == 1) {
			ans++;
			continue;
		}

		for (int j = 0; j < strLen - 1; j++) {
			if (str[j] != str[j + 1]) {
				v[str[j] - 'a']++;
			}
		}

		if (str[strLen - 1] != str[strLen - 2] || str[strLen - 1] == str[strLen - 2]) {
			v[str[strLen - 1] - 'a']++;
		}

		ans++;

		for (int j = 0; j < 26; j++) {
			if (v[j] > 1) {
				ans--;
				break;
			}
		}

		for (int j = 0; j < 26; j++) {
			v[j] = 0;
		}
	}

	cout << ans;

	return 0;
}