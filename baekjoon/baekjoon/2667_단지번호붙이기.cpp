#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int N, cnt = 0;
int map[26][26] = { 0 };
int visit[26][26] = { 0 };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
vector<int> ans;

void dfs(int y, int x) {
	if (visit[y][x] == 1) {
		return;
	}
	
	visit[y][x] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		if (x + dx[i] < N && y + dy[i] < N && x + dx[i] >= 0 && y + dy[i] >= 0) {
			if (map[y + dy[i]][x + dx[i]] == 1 && visit[y + dy[i]][x + dx[i]] == 0) {
				dfs(y + dy[i], x + dx[i]);
			}
		}
	}
}

int main(void) {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visit[i][j] == 0 && map[i][j] == 1) {
				cnt = 0;
				dfs(i, j);
				ans.push_back(cnt);
			}
		}
	}

	sort(ans.begin(), ans.end());

	printf("%d\n", ans.size());
	for (int i = 0; i < ans.size(); i++) {
		printf("%d\n", ans[i]);
	}

	return 0;
}