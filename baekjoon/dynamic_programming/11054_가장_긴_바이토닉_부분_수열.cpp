#include <cstdio>

int n, ans = 0;
int max1 = 0, max2 = 0;
int arr[1001], dp[1001][2];

int getMax(int a, int b) { return a < b ? b : a; }

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		dp[i][0] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && dp[i][0] < dp[j][0] + 1) {
				dp[i][0] = dp[j][0] + 1;
			}
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (arr[i] > arr[j] && dp[i][1] < dp[j][1] + 1) {
				dp[i][1] = dp[j][1] + 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		ans = getMax(ans, dp[i][0] + dp[i][1]);
	}

	printf("%d", ans);
		
	return 0;
}