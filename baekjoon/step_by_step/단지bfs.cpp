#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, cnt = 0;
char map[26][26];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
vector<int> ans;
queue<pair<int, int>> q;

void bfs(int y, int x) {
	q.push(make_pair(y, x));
	map[y][x] = '0';
	while (!q.empty()) {
		pair<int, int> now = q.front();
		q.pop();
		cnt++;
		for (int i = 0; i < 4; i++) {
			if (now.first + dy[i] < N && now.first + dy[i] >= 0 && now.second + dx[i] < N && now.second + dx[i] >= 0) {
				if (map[now.first + dy[i]][now.second + dx[i]] == '1') {
					map[now.first + dy[i]][now.second + dx[i]] = '0';
					q.push(make_pair(now.first + dy[i], now.second + dx[i]));
				}
			}
		}
	}
}

int main(void) {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", &map[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1') {
				cnt = 0;
				bfs(i, j);
				ans.push_back(cnt);
			}
		}
	}

	printf("%d\n", ans.size());
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) {
		printf("%d\n", ans[i]);
	}

	return 0;
}