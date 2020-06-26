#include <cstdio>

int n, ans = 0;
int arr[10003], dp[10003];

int getMax(int a, int b) { return a > b ? a : b; }

int main(void) {
	scanf("%d", &n);

	for (int i = 3; i < n + 3; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 3; i < n + 3; i++) {
		dp[i] = getMax(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
		dp[i] = getMax(dp[i], dp[i - 1]);
		ans = getMax(dp[i], ans);
	}

	printf("%d", ans);

	return 0;
}