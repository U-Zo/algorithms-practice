#include <cstdio>

int main(void) {
	int n, i = 1, sum = 0;
	
	scanf("%d", &n);
	while (n > sum) {
		sum += i++;
	}

	printf("%d", --i);

	return 0;
}