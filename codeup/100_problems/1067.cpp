#include <cstdio>

int main(void) {
	int a;
	
	scanf("%d", &a);
	if (a < 0) printf("%s\n", "minus");
	else printf("%s\n", "plus");

	if (a % 2 == 0) printf("%s", "even");
	else printf("%s", "odd");

	return 0;
}