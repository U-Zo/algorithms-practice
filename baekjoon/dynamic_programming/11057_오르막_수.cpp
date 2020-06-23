#include <cstdio>
#define MOD 10007

int N, ans = 0;
int dp[1001][10];

int main(void) {
	scanf("%d", &N);

	for (int i = 0; i < 10; i++) dp[1][i] = 1;
	for (int i = 2; i <= N; i++) {
		dp[i][0] = 1;
		for (int j = 1; j < 10; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
		}
	}
	for (int i = 0; i < 10; i++) {
		ans = (ans + dp[N][i]) % MOD;
	}

	printf("%d", ans);


	return 0;
}