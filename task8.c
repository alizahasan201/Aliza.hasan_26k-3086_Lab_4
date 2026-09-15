#include <stdio.h>

int main() {
    int m1;

    printf("Enter Student Marks: ");
    scanf("%d", &m1);

    if (m1 >= 50)
    {
        printf("PASS");
    }
    else
        printf("FAIL");

    return 0;
}
