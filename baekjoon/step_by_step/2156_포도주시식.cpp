#include <cstdio>
#define MAX 10003

int n, ans = 0;
int arr[MAX];
int dp[MAX];

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	scanf("%d", &n);

	for (int i = 3; i < n + 3; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 3; i < n + 3; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
		dp[i] = max(dp[i], dp[i - 1]);
		ans = max(dp[i], ans);
	}

	printf("%d", ans);

	return 0;
}