#include <stdio.h>

int main() {
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    printf("The Square of number is: %d", a * a);
    printf("\nThe Cube of number is: %d", a * a * a);

    return 0;
}
