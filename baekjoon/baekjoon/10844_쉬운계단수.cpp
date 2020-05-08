#include <cstdio>
#define MOD 1000000000

int n, ans = 0;
int dp[101][12];

int main(void) {
	scanf("%d", &n);

	for (int i = 2; i < 11; i++) {
		dp[0][i] = 1;
	}

	for (int i = 1; i < n; i++) {
		dp[i][0] = 0;
		dp[i][11] = 0;

		for (int j = 1; j < 11; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}

	for (int i = 1; i < 11; i++) {
		ans = (ans + dp[n - 1][i]) % MOD;
	}

	printf("%d", ans);

	return 0;
}