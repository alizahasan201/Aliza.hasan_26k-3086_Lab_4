#include <stdio.h>

int main() {
    float cel, far;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &cel);

    far = (cel * 9 / 5) + 32;

    printf("The Temperature in Fahrenheit is: %.2fF", far);

    return 0;
}
