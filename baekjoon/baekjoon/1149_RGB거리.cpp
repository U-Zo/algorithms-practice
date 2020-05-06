#include <cstdio>
#define MAX 1001
#define MIN(a, b) a < b ? a : b

int N;
int house[MAX][3];
int dp[MAX][3];

int main(void) {
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &house[i][j]);
		}
	}

	dp[0][0] = house[0][0];
	dp[0][1] = house[0][1];
	dp[0][2] = house[0][2];

	for (int i = 1; i < N; i++) {
		dp[i][0] = MIN((dp[i - 1][1] + house[i][0]), (dp[i - 1][2] + house[i][0]));
		dp[i][1] = MIN((dp[i - 1][0] + house[i][1]), (dp[i - 1][2] + house[i][1]));
		dp[i][2] = MIN((dp[i - 1][0] + house[i][2]), (dp[i - 1][1] + house[i][2]));
	}

	int a = MIN(dp[N - 1][0], dp[N - 1][1]);
	int ans = MIN(a, dp[N - 1][2]);

	printf("%d\n", ans);

	return 0;
}