#include <cstdio>

int n, arr[301], dp[301];

int getMax(int a, int b) { return a < b ? b : a; }

int main(void) {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = getMax(arr[0] + arr[2], arr[1] + arr[2]);

	for (int i = 3; i < n; i++) {
		dp[i] = getMax(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}

	printf("%d", dp[n - 1]);

	return 0;
}