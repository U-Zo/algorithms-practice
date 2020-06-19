#include <cstdio>

int main(void) {
	long long int a, r, n, ans;

	scanf("%lld %lld %lld", &a, &r, &n);
	ans = a;
	for (int i = 0; i < n - 1; i++) {
		ans *= r;
	}

	printf("%lld", ans);

	return 0;
}