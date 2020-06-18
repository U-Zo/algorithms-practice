#include <cstdio>

int main(void) {
	int w, h, b;
	double ans = 0;

	scanf("%d %d %d", &w, &h, &b);
	ans = (double)w * h * b / 8 / 1024 / 1024;
	printf("%.2lf MB", ans);

	return 0;
}