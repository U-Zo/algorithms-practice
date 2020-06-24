#include <cstdio>

int T, n;
int arr[2][100001], dp[2][100001];
int ans = 0;
int getMax(int a, int b) { return a > b ? a : b; }

int main(void) {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int j = 0; j < 2; j++) {
			for (int k = 1; k <= n; k++) {
				scanf("%d", &arr[j][k]);
			}
		}

		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];

		for (int j = 2; j <= n; j++) {
			dp[0][j] = getMax(dp[1][j - 1], dp[1][j - 2]) + arr[0][j];
			dp[1][j] = getMax(dp[0][j - 1], dp[0][j - 2]) + arr[1][j];
		}

		ans = getMax(dp[0][n], dp[1][n]);

		printf("%d\n", ans);
	}

	return 0;
}