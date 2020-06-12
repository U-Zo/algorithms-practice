#include <cstdio>
#include <queue>
using namespace std;

int N, M, X, Y, cnt = 0;
char map[101][101];
int ans[101][101] = { 0 };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
pair<int, int> now;

void bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    map[y][x] = '0';
    ans[y][x] = 1;
    while (!q.empty()) {
        now = q.front();
        q.pop();
        cnt++;
        if (now.first == N - 1 && now.second == M - 1) {
            return;
        }

        for (int i = 0; i < 4; i++) {
            X = now.second + dx[i];
            Y = now.first + dy[i];
            if (X >= 0 && Y >= 0 && X < M && Y < N) {
                if (map[Y][X] == '1') {
                    q.push(make_pair(Y, X));
                    map[Y][X] = '0';
                    ans[Y][X] = ans[now.first][now.second] + 1;
                }
            }
        }
    }
}

int main(void) {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
    }

    bfs(0, 0);

    printf("%d", ans[N - 1][M - 1]);

    return 0;
}