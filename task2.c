#include <stdio.h>

int main() {
    int num;

    printf("Enter your late days: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("No Fine");
    }
    else if (num <= 5)
    {
        printf("Fine: Rs. 50");
    }
    else if (num <= 10)
    {
        printf("Fine: Rs. 100");
    }
    else
    {
        printf("Fine: Rs. 200");
    }

    return 0;
}
