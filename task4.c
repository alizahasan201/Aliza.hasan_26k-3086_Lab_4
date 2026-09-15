#include <stdio.h>

int main() {
    int len, wid, area, peri;

    printf("Enter Length: ");
    scanf("%d", &len);

    printf("Enter Width: ");
    scanf("%d", &wid);

    area = len * wid;
    peri = 2 * len + 2 * wid;

    printf("The Area of Rectangle is: %d cm.sq", area);
    printf("\nThe Perimeter of Rectangle is: %d cm", peri);

    return 0;
}
