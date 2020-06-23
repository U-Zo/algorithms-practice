#include <cstdio>

int N;
long long int dp[91];

int main(void) {
	scanf("%d", &N);

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	printf("%lld", dp[N]);

	return 0;
}