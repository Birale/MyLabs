#include <stdio.h>
#include "main2.c"

int main() {
    float a, b, c;

    printf("Vvedite storoni treygolnika: ");
    scanf("%f %f %f", &a, &b, &c);

	
    if (cyIIIestrovovanie(a, b, c)) {
        float perimeter = getTrianglePerimeter(a, b, c);
    	float area = getTriangleArea(a, b, c);
    	printf("Perimetr: %.2f\n", perimeter);
    	printf("PloIIIad: %.2f\n", area);
    } else {
        printf("Ne cyIIIestvyet\n");
    }
    return 0;
}