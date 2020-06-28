#include <cstdio>

int n, ans, arr[1001], dp[1001][2];

int getMax(int a, int b) { return a > b ? a : b; }

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		dp[i][0] = 1;
		dp[i][1] = arr[i];
	}

	ans = dp[0][1];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && dp[j][0] + 1 > dp[i][0]) {
				dp[i][0] = dp[j][0] + 1;
				dp[i][1] = getMax(dp[i][1], dp[j][1] + arr[i]);
			}

			ans = getMax(ans, dp[i][1]);
		}
	}

	printf("%d", ans);
		
	return 0;
}