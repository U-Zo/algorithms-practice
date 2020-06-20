#include <cstdio>

int arr[101][101];
int n, h, w, l, d, x, y;

int main(void) {
	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);

		if (d == 1) {
			for (int j = 0; j < l; j++) {
				arr[x++][y] = 1;
			}
		}
		else {
			for (int j = 0; j < l; j++) {
				arr[x][y++] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}

	return 0;
}