#include <cstdio>
#include <queue>
using namespace std;

queue<pair<int, pair<int, int>>> q;
int N, M, H, X, Y, Z, day = 0;
int box[101][101][101] = { 0 };
int dx[6] = { 0, 0, 0, 0, -1, 1 };
int dy[6] = { 0, 0, -1, 1, 0, 0 };
int dz[6] = { 1, -1, 0, 0, 0, 0 };

void bfs() {
	pair<int, pair<int, int>> now;
	while (!q.empty()) {
		now = q.front();
		q.pop();
		for (int i = 0; i < 6; i++) {
			X = now.second.second + dx[i];
			Y = now.second.first + dy[i];
			Z = now.first + dz[i];
			if (X >= 0 && Y >= 0 && Z >= 0 && X < M && Y < N && Z < H) {
				if (box[Z][Y][X] == 0) {
					q.push(make_pair(Z, make_pair(Y, X)));
					box[Z][Y][X] = box[now.first][now.second.first][now.second.second] + 1;
					day = box[Z][Y][X];
				}
			}
		}
	}
}

bool isRipe() {
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (box[i][j][k] == 0) {
					return false;
				}
			}
		}
	}

	return true;
}

int main(void) {
	scanf("%d %d %d", &M, &N, &H);

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				scanf("%d", &box[i][j][k]);
				if (box[i][j][k] == 1) {
					q.push(make_pair(i, make_pair(j, k)));
					day = 1;
				}
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