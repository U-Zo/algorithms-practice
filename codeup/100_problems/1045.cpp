#include <cstdio>

int main(void) {
	int a, b;
	
	scanf("%d%d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n%.2f", a + b, a - b, a * b, a / b, a % b, (float)a / b);

	return 0;
}