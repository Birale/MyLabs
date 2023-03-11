#include <stdio.h>
#include "main3.c"

int main() {
    float a, b, c;

    printf("Vvedite storoni treygolnika: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Takogo treygolnika ne sycestvyet\n");
        return 1;
    }

    float perimeter = getTrianglePerimeter(a, b, c);
    float area = getTriangleArea(a, b, c);
    printf("Perimetr: %.2f\n", perimeter);
    printf("PloIIIad: %.2f\n", area);

    return 0;
}