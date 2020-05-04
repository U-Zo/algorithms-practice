#include <cstdio>
#include <queue>
#define MAX 1000
using namespace std;

int N, M, nx, ny, br, cnt = 1;
int map[MAX][MAX] = { 0 };
int check[MAX][MAX][2] = { 0 };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
queue<pair<pair<int, int>, int>> q;

int bfs(void) {
	q.push(make_pair(make_pair(0, 0), 0));
	check[0][0][0] = 1;
	while (!q.empty()) {
		pair<pair<int, int>, int> now = q.front();
		q.pop();

		if (now.first.first == N - 1 && now.first.second == M - 1)
			return check[N - 1][M - 1][now.second];

		for (int i = 0; i < 4; i++) {
			nx = now.first.second + dx[i];
			ny = now.first.first + dy[i];
			br = now.second;
			if (nx >= 0 && ny >= 0 && nx < M && ny < N) {
				if (map[ny][nx] == 0 && check[ny][nx][br] == 0) {
					q.push(make_pair(make_pair(ny, nx), br));
					check[ny][nx][br] = check[now.first.first][now.first.second][br] + 1;
				}
				
				if (br == 0 && map[ny][nx] == 1) {
					q.push(make_pair(make_pair(ny, nx), 1));
					check[ny][nx][br + 1] = check[now.first.first][now.first.second][br] + 1;
				}
			}
		}
	}

	return -1;
}

int main(void) {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	printf("%d", bfs());

	return 0;
}