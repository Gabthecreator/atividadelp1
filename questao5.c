
#include <stdio.h>
#include <string.h>

int main() {
    char string[200];
    fgets(string, sizeof(string), stdin);
    printf("tamanho %d\n", strlen(string) - 1);
}
