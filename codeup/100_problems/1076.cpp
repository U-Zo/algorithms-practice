#include <cstdio>

int main(void) {
	char c;

	scanf("%c", &c);
	for (int i = 'a'; i <= c; i++) {
		printf("%c ", i);
	}

	return 0;
}