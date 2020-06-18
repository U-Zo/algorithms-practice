#include <cstdio>

int main(void) {
	int n = 0, sum = 0;

	scanf("%d", &n);
	for (int i = 1; sum < n; i++) {
		sum += i;
	}

	printf("%d", sum);

	return 0;
}