#include <stdio.h>

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float perimeter = 2 * 3.141592 * r;
    float area =  3.141592*r* r;
    printf("Perimeter of the circle: %f\n", perimeter);
    printf("Area of the circle: %f\n", area);
    return 0;
}

