

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int divisores = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divisores += 1;
        }
    }
    if (divisores > 2) {
        printf(" %d Nao eh primo", n);
    }
    else {
        printf("%d Eh primo", n);

    }
}
