
#include <stdio.h>

int main() {

    int farenForCelcius;
    int celciusForFaren;
    int temp;
    scanf("%d", &temp);

    farenForCelcius = (temp - 32) / 1.8;
    celciusForFaren = (temp * 1.8) + 32;
    printf("farenheit %d\n", celciusForFaren);
    printf("Celcius %d\n", farenForCelcius);

}
