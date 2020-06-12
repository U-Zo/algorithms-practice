#include <cstdio>
#include <queue>
using namespace std;

int T, N, M, K, X, Y, x, y, cnt;
int map[51][51] = { 0 };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
queue<pair<int, int>> q;

void bfs(int y, int x) {
	q.push(make_pair(y, x));
	map[y][x] = 0;
	while (!q.empty()) {
		pair<int, int> now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			X = now.second + dx[i];
			Y = now.first + dy[i];
			if (X >= 0 && Y >= 0 && X < M && Y < N) {
				if (map[Y][X] == 1) {
					q.push(make_pair(Y, X));
					map[Y][X] = 0;
				}
			}
		}
	}
}

int main(void) {
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		cnt = 0;
		scanf("%d %d %d", &M, &N, &K);

		for (int j = 0; j < K; j++) {
			scanf("%d %d", &x, &y);
			map[y][x] = 1;
		}

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (map[j][k] == 1) {
					bfs(j, k);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}