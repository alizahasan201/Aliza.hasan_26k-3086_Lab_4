#include <stdio.h>

int main() {
    char name[100];
    char ch;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    puts("Student Name:");
    puts(name);

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    printf("You entered the character: ");
    putchar(ch);

    return 0;
}
