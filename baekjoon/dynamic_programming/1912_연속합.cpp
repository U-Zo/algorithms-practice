#include <cstdio>

int n, ans = -1000;
int arr[100001], dp[100001];

int getMax(int a, int b) { return a < b ? b : a; }

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	dp[0] = arr[0];
	ans = getMax(dp[0], ans);
	for (int i = 1; i < n; i++) {
		dp[i] = getMax(arr[i] + dp[i - 1], arr[i]);
		ans = getMax(dp[i], ans);
	}

	printf("%d", ans);

	return 0;
}