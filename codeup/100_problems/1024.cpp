#include <cstdio>
#include <cstring>

int main(void) {
	char str[21] = "";

	scanf("%s", str);
	
	for (int i = 0; str[i] != '\0'; i++) {
		printf("\'%c\'\n", str[i]);
	}

	return 0;
}