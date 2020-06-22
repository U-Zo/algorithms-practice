#include <cstdio>

int N, max = 0, ans = 1;
int arr[1001];
int dp[1001];

int getMax(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	dp[0] = 1;

	for (int i = 1; i < N; i++) {
		dp[i] = 1;
		max = 0;

		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				max = getMax(max, dp[j]);
			}
		}

		dp[i] += max;
		ans = getMax(ans, dp[i]);
	}
	
	printf("%d", ans);

	return 0;
}