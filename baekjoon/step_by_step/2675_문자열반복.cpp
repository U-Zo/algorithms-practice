#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int T, R;
	char S[20];
	string str;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R;
		cin >> S;
		for (int j = 0; j < strlen(S); j++) {
			for (int k = 0; k < R; k++) {
				str += S[j];
			}
		}

		cout << str << endl;
		str.clear();
	}

	return 0;
}