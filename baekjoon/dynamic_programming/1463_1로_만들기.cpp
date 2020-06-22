#include <cstdio>
#define MIN(a, b) a < b ? a : b
/*
X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.
*/

int n;
int dp[1000001];

int main(void) {
	scanf("%d", &n);

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	// bottom up
	for (int i = 4; i <= n; i++) {
		if (i % 3 == 0) {
			dp[i] = MIN(dp[i - 1], dp[i / 3]);
			dp[i]++;
		}
		else if (i % 2 == 0) {
			dp[i] = MIN(dp[i - 1], dp[i / 2]);
			dp[i]++;
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
	}

	printf("%d", dp[n]);

	return 0;
}