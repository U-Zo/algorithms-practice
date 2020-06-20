#include <cstdio>
#define MIN(a, b) a < b ? a : b

int n, num, ans = 987654321;

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		ans = MIN(ans, num);
	}

	printf("%d", ans);

	return 0;
}