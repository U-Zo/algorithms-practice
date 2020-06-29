#include <cstdio>

int n, ans = 0, arr[1001], dp[1001];

int getMax(int a, int b) { return a < b ? b : a; }

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		dp[i] = 1;
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
				dp[i] = dp[j] + 1;
			}
		}
		ans = getMax(ans, dp[i]);
	}

	printf("%d", ans);

	return 0;
}