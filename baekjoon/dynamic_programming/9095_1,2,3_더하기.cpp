#include <cstdio>

int T, n;
int dp[11];

int main(void) {
	scanf("%d", &T);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < T; i++) {
		scanf("%d", &n);

		for (int i = 4; i <= n; i++) {
			if (dp[i]) continue;
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		printf("%d\n", dp[n]);
	}

	return 0;
}