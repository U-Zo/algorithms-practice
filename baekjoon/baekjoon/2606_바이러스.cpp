#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int N, M;
vector<int> arr[101];
int c[101] = {0};
int cnt = 0;

void bfs(int start) {
	queue<int> q;

	q.push(start);
	c[start] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cnt++;
		for (int i = 0; i < arr[x].size(); i++) {
			int y = arr[x][i];
			if (c[y] == 0) {
				q.push(y);
				c[y] = 1;
			}
		}
	}
}

int main(void) {
	int n1, n2;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &n1, &n2);
		arr[n1].push_back(n2);
		arr[n2].push_back(n1);
	}

	bfs(1);
	cnt -= 1;
	printf("%d", cnt);

	return 0;
}