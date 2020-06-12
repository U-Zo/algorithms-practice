#include <cstdio>

int main(void) {
    int N;
    int a, b, c;

    scanf("%d", &N);

    a = 1;
    b = 1;

    for (int i = 2; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;

        if (b >= 15746) {
            b -= 15746;
        }
    }
    
    printf("%d", b);

    return 0;
}