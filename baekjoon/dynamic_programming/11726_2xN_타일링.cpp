#include <cstdio>

int n;
int dp[1001];

int main(void) {
	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	for (int i = 4; i <= n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
	}

	printf("%d", dp[n]);

	return 0;
}