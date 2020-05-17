#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int N = 7, M = 6;
vector<int> arr[8];
int c[8] = { 0 };

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
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


	return 0;
}