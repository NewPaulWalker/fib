#include <stdio.h>

int main(void) {
    int n;
    unsigned long long a = 0, b = 1, c;

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error: invalid input\n");
        return 1;
    }

    if (n < 0) {
        fprintf(stderr, "Error: n must be non-negative\n");
        return 1;
    }

    if (n > 93) {
        fprintf(stderr, "Error: n must be <= 93\n");
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%llu\n", b);
    return 0;
}
