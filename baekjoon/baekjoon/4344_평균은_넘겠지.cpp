#include <iostream>
using namespace std;

int main(void) {
	int T = 0;
	int std = 0;
	int score = 0;
	int sum = 0;
	float avg = 0;
	int cnt = 0;
	int arr[1000] = { 0 };

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> std;
		for (int j = 0; j < std; j++) {
			cin >> score;
			arr[j] = score;
			sum += score;
		}

		avg = sum / std;

		for (int j = 0; j < std; j++) {
			if (arr[j] > avg) {
				cnt++;
			}
		}

		cout << fixed;
		cout.precision(3);

		cout << (float)cnt / (float)std * 100 << '%' << endl;

		sum = 0;
		cnt = 0;
	}

	return 0;
}