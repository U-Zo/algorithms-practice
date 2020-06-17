#include <cstdio>

void isEven(int n) {
	if (n % 2 == 0) {
		printf("%d\n", n);
	}
}

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	isEven(a);
	isEven(b);
	isEven(c);

	return 0;
}