#include <cstdio>

int T, N;
long long memo[101];

int main(void) {
    scanf("%d", &T);

    memo[0] = 1;
    memo[1] = 1;
    memo[2] = 1;

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);

        for (int j = 3; j < N; j++) {
            if (memo[j] == 0) {
                memo[j] = memo[j - 3] + memo[j - 2];
            }
        }

        printf("%lld\n", memo[N - 1]);
    }

    return 0;
}