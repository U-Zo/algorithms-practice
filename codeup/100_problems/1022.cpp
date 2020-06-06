#include <cstdio>

int main(void) {
	char str[2001] = "";
	fgets(str, 2000, stdin);
	printf("%s", str);

	return 0;
}