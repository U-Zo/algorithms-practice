#include <cstdio>

int n, dp[31];

int main(void) {
	scanf("%d", &n);

	dp[0] = 1;
	dp[2] = 3;

	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 2] * 3;
		for (int j = 4; j <= i; j += 2) {
			dp[i] += dp[i - j] * 2;
		}
	}

	printf("%d", dp[n]);

	return 0;
}