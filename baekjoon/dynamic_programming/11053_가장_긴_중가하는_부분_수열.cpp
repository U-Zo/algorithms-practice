#include <cstdio>

int arr[1001], dp[1001];
int n, num = 0, ans = 1;

int getMax(int a, int b) { return a > b ? a : b; }

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	dp[0] = 1;

	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		num = 0;

		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				num = getMax(num, dp[j]);
			}
		}

		dp[i] += num;
		ans = getMax(ans, dp[i]);
	}

	printf("%d", ans);

	return 0;
}