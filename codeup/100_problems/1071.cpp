#include <cstdio>

int main(void) {
	int n;

reload:
	scanf("%d", &n);
	if (n != 0) {
		printf("%d\n", n);
		goto reload;
	}

	return 0;
}