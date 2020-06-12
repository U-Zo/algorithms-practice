#include <cstdio>
#define MAX 1000001

int N;
int arr[MAX];

int min(int a, int b) {
	return a < b ? a : b;
}

int main(void) {
	scanf("%d", &N);

	arr[1] = 0;

	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	printf("%d\n", arr[N]);

	return 0;
}