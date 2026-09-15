#include <stdio.h>

int main() {
    float marks, finc;
    printf("Enter your Marks: ");
    scanf("%f", &marks);

    printf("Enter your Family Income: ");
    scanf("%f", &finc);

    if (marks >= 80 || finc < 50000)
    {
        printf("Scholarship Granted");
    }
    else {
        printf("Not Qualified");
    }

    return 0;
}
