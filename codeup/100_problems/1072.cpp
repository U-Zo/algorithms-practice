#include <cstdio>

int main(void) {
	int n, m;

	scanf("%d", &n);
repeat:
	scanf("%d", &m);
	printf("%d\n", m);
	if (--n != 0) goto repeat;

	return 0;
}