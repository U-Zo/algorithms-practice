#include <cstdio>

int main(void) {
	int n, m, k;

	scanf("%d %d %d", &n, &m, &k);
	printf("%d", n + ((k - 1) * m));

	return 0;
}