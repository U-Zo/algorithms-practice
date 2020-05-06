#include <cstdio>
#define MAX 501
#define max(a, b) a > b ? a : b

int n, ans = 0;
long long arr[MAX][MAX];
long long dp[MAX][MAX];

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	dp[0][0] = arr[0][0];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			}
			else if (i == j) {
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			}
			else {
				dp[i][j] = max((dp[i - 1][j - 1] + arr[i][j]), (dp[i - 1][j] + arr[i][j]));
			}

			if (i == n - 1) {
				ans = max(ans, dp[i][j]);
			}
		}
	}

	printf("%d", ans);

	return 0;
}