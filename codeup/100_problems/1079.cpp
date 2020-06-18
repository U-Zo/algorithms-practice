#include <cstdio>

int main(void) {
	char c = NULL;

	while (c != 'q') {
		scanf("%c\n", &c);
		printf("%c\n", c);
	}

	return 0;
}