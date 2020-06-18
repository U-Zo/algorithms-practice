#include <cstdio>

int main(void) {
	long long int h, b, c, s;
	float answer = 0;

	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	answer = h * b * c * s / (float)(8 * 1024 * 1024);

	printf("%.1f MB", answer);

	return 0;
}