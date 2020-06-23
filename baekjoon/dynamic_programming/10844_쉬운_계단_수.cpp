#include <cstdio>
#define MOD 1000000000

int N, ans = 0;
int dp[101][10];

int main(void) {
	scanf("%d", &N);

	for (int i = 1; i < 10; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][1] % MOD;
			else if (j == 9) dp[i][j] = dp[i - 1][8] % MOD;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}

	for (int i = 0; i < 10; i++) {
		ans = (ans + dp[N][i]) % MOD;
	}

	printf("%d", ans);

	return 0;
}