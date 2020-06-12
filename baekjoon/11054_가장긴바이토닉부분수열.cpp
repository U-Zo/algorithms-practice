#include <cstdio>

int N;
int arr[1001];
int dp[1001][2];
int ans = 0;
int max1 = 0, max2 = 0;

int getMax(int a, int b) {
	return a > b ? a : b;
}


int main(void) {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		dp[i][0] = 1;
		max1 = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				max1 = getMax(max1, dp[j][0]);
			}
		}

		dp[i][0] += max1;
	}

	for (int i = N - 1; i >= 0; i--) {
		dp[i][1] = 1;
		max2 = 0;
		for (int j = N - 1; j > i; j--) {
			if (arr[i] > arr[j]) {
				max2 = getMax(max2, dp[j][1]);
			}
		}

		dp[i][1] += max2;
	}

	for (int i = 0; i < N; i++) {
		ans = getMax(ans, (dp[i][0] + dp[i][1] - 1));
		printf("%d %d\n", dp[i][0], dp[i][1]);
	}

	printf("%d", ans);

	return 0;
}