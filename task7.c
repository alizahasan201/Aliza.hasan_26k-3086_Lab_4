#include <stdio.h>

int main() {
    int n1, n2, n3;
    float avg;

    printf("Enter First number: ");
    scanf("%d", &n1);

    printf("Enter Second number: ");
    scanf("%d", &n2);

    printf("Enter Third number: ");
    scanf("%d", &n3);

    avg = (n1 + n2 + n3) / 3;

    printf("The Average of Three numbers: %f", avg);

    return 0;
}
