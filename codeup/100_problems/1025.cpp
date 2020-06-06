#include <cstdio>

int main(void) {
	int n, m = 10000;

	for (int i = 0; i < 5; i++) {
		scanf("%1d", &n);
		printf("[%d]\n", n * m);
		m /= 10;
	}

	return 0;
}