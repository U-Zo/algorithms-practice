#include <cstdio>

int arr[11][11] = {};
int x, y, tmp = 0;

int main(void) {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	x = y = 2;

	while (1) {
		if (arr[y][x] == 2) {
			arr[y][x] = 9;
			break;
		}

		arr[y][x] = 9;
		if (arr[y][x + 1] == 0 || arr[y][x + 1] == 2) x++;
		else if (arr[y + 1][x] == 0 || arr[y + 1][x] == 2) y++;
		else break;
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}

	return 0;
}