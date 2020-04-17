#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char S[100] = "";
	int s[26];

	memset(s, -1, sizeof(s));

	cin >> S;

	for (int i = 0; i < strlen(S); i++) {
		if (s[S[i] - 'a'] == -1)
			s[S[i] - 'a'] = i;
		else
			continue;
	}

	for (int i = 0; i < 26; i++) {
		if (i == 25) {
			cout << s[i] << endl;
			break;
		}
		cout << s[i] << ' ';
	}

	return 0;
}