#include <cstdio>
using namespace std;

int T, N, M, K, x, y, cnt;
int map[51][51];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
int X, Y;

void dfs(int y, int x) {
	if (map[y][x] == 0) {
		return;
	}

	map[y][x] = 0;
	for (int i = 0; i < 4; i++) {
		X = x + dx[i];
		Y = y + dy[i];
		if (Y < 51 && X < 51 && X >= 0 && Y >= 0) {
			if (map[Y][X] == 1) dfs(Y, X);
		}
	}
}

int main(void) {
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		N = M = K = cnt = 0;
		scanf("%d %d %d", &M, &N, &K);

		for (int j = 0; j < K; j++) {
			scanf("%d %d", &x, &y);
			map[y][x] = 1;
		}

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (map[j][k] == 1) {
					dfs(j, k);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}