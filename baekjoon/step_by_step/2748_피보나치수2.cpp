#include <cstdio>
using namespace std;

int n;
unsigned long long ans = 0;
unsigned long long memo[90] = { 0 };

unsigned long long fib(int n) {
	if (n == 1)
		return 1;

	if (n == 2)
		return 1;
	
	if (memo[n] != 0) {
		return memo[n];
	}

	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(void) {
	scanf("%d", &n);

	ans = fib(n);

	printf("%lld", ans);

	return 0;
}