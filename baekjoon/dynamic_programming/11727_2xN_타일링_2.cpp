#include <cstdio>
#define DIV 10007

int n;
int dp[1001];

int main(void) {
	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % DIV;
	}

	printf("%d", dp[n]);

	return 0;
}