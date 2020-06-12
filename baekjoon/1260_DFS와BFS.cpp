#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, V;
vector<int> arr[1002];
int checked[1002] = { 0 };
int n1, n2;

void bfs(int start) {
	queue<int> q;
	q.push(start);
	checked[start] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < arr[x].size(); i++) {
			sort(arr[x].begin(), arr[x].end());
			int y = arr[x][i];
			if (checked[y] == 0) {
				q.push(y);
				checked[y] = 1;
			}
		}
	}
}

void dfs(int x) {
	if (checked[x]) {
		return;
	}

	checked[x] = 1; // 방문 처리
	printf("%d ", x);
	for (int i = 0; i < arr[x].size(); i++) {
		sort(arr[x].begin(), arr[x].end());
		int y = arr[x][i];
		dfs(y);
	}
}

int main(void) {
	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &n1, &n2);
		arr[n1].push_back(n2);
		arr[n2].push_back(n1);
	}

	dfs(V);
	printf("\n");
	memset(checked, 0, sizeof(checked));
	bfs(V);

	return 0;
}