#include <cstdio>

int t, n;
long long int dp[101];

int main(void) {
	scanf("%d", &t);

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);

		for (int j = 4; j <= n; j++) {
			if (dp[j] == 0)
				dp[j] = dp[j - 3] + dp[j - 2];
		}

		printf("%lld\n", dp[n]);
	}

	return 0;
}