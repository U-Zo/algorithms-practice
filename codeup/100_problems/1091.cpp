#include <cstdio>

int main(void) {
	long long int a, m, d, n, ans;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	ans = a;
	for (int i = 1; i < n; i++) {
		ans = (ans * m) + d;
	}

	printf("%lld", ans);

	return 0;
}