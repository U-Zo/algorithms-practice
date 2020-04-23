#include <iostream>
#define min(a, b) a < b ? a : b
using namespace std;

int main(void) {
	int M, N;
	char arr[50][50];
	int cntB = 0;
	int cntW = 0;
	int min = 987654321;

	cin >> N >> M;

	// 입력
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 자르기
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cntW = 0;
			cntB = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0) {
						if (arr[k][l] == 'B') {
							cntW++;
						}
						else {
							cntB++;
						}
					}
					else {
						if (arr[k][l] == 'B') {
							cntB++;
						}
						else {
							cntW++;
						}
					}
				}
			}

			min = min(min, cntW);
			min = min(min, cntB);
		}
	}

	cout << min;

	return 0;
}