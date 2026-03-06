
#include <stdio.h>

int main() {

    int numbers[5];
    int n;
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        numbers[i] = n;
        soma += numbers[i];
    }
    printf("%d\n", soma);

}
