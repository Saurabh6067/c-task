#include <stdio.h>

int main() {
    float h, w;

    printf("Enter the height of the rect: ");
    scanf("%f", &h);
    printf("Enter the width of the rect: ");
    scanf("%f", &w);
    float perimeter = 2 * (h+ w);
    float area = h*w;
    printf("Perimeter of the rect: %f\n", perimeter);
    printf("Area of the rect: %f\n", area);

    return 0;
}

