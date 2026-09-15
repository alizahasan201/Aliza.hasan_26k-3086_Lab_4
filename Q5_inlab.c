#include <stdio.h>

int main() {
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade A");
    }
    else if (marks >= 60) {
        printf("Grade B");
    }
    else {
        printf("Grade C");
    }

    return 0;
}
