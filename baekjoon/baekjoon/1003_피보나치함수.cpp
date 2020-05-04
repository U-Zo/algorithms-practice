#include <cstdio>

int T, N;
int memo[41];

int fib(int n) {
	if (n == 0) {
		memo[0] = 0;
		return 0;
	}
	else if (n == 1) {
		memo[1] = 1;
		return 1;
	}
	
	if (memo[n] != 0) {
		return memo[n];
	}

	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(void) {
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		
		if (N == 0) printf("1 0\n");
		else if (N == 1) printf("0 1\n");
		else {
			fib(N);
			printf("%d %d\n", memo[N - 1], memo[N]);
		}
	}

	return 0;
}