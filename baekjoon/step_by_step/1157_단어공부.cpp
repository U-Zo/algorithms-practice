#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
	int arr[26] = { 0 };
	string S;
	int max = 0;
	int p = 0;

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] > 'Z') {
			arr[S[i] - 32 - 'A']++;
		}
		else {
			arr[S[i] - 'A']++;
		}
	}
	
	max = arr[0];

	for (int i = 1; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			p = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (p != i) {
			if (max == arr[i]) {
				cout << '?';
				return 0;
			}
		}
	}

	cout << (char)(p + 'A');

	return 0;
}