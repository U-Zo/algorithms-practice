#include <cstdio>

int n, dp[100001];

int getMin(int a, int b) { return a < b ? a : b; }

int main(void) {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 2; j * j <= i; j++) {
			dp[i] = getMin(dp[i], dp[i - j * j] + 1);
		}
	}

	printf("%d", dp[n]);

	return 0;
}