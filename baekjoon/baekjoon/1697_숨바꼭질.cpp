#include <cstdio>
#include <queue>
#define MAX 100001
using namespace std;

int N, K, X, cnt = 0;
int arr[MAX] = { 0 };
queue<int> q;

void bfs(void) {
	while (!q.empty()) {
		X = q.front();
		q.pop();
		int a = X - 1;
		int b = X + 1;
		int c = X * 2;
		if (a < MAX && a >= 0) {
			if (arr[a] == 0) {
				arr[a] = 1 + arr[X];
				q.push(a);
			}
		}

		if (b < MAX && b >= 0) {
			if (arr[b] == 0) {
				arr[b] = 1 + arr[X];
				q.push(b);
			}
		}

		if (c < MAX && c >= 0) {
			if (arr[c] == 0) {
				arr[c] = 1 + arr[X];
				q.push(c);
			}
		}

		if (a == K || b == K || c == K) {
			break;
		}
	}
}

int main(void) {
	scanf("%d %d", &N, &K);

	q.push(N);
	arr[N] = 1;

	bfs();

	printf("%d", arr[K] - 1);

	return 0;
}