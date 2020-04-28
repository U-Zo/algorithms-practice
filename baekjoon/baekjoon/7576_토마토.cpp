#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int N, M, n, X, Y, cnt, day = 0;
int map[1001][1001];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
queue<pair<int, int>> q;

void bfs() {
	pair<int, int> now;
	while (!q.empty()) {
		now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			X = now.second + dx[i];
			Y = now.first + dy[i];

			if (X >= 0 && Y >= 0 && X < M && Y < N) {
				if (map[Y][X] == 0) {
					q.push(make_pair(Y, X));
					map[Y][X] = map[now.first][now.second] + 1;
					day = map[Y][X];
				}
			}
		}
	}
}

bool isRipe() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				return false;
			}
		}
	}

	return true;
}

int main(void) {
	scanf("%d %d", &M, &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &n);
			map[i][j] = n;
			if (n == 1) {
				q.push(make_pair(i, j));
				day = 1;
			}
		}
	}

	bfs();
	if (!isRipe()) {
		printf("-1");
		return 0;
	}

	printf("%d", day - 1);

	return 0;
}