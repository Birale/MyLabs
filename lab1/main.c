#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Enter number: "); 
 	scanf("%lf", &a); 
 	printf("Enter number: "); 
 	scanf("%lf", &b); 
 	printf("Enter number: "); 
 	scanf("%lf", &c); 
    float discriminant = b * b - 4 * a * c; 
    float x1, x2; 

    if (discriminant < 0)
    {
        printf("The equation has no real roots.\n");
    }
    else if (discriminant == 0)
    {
        x1 = -b / (2 * a);
        printf("The equation has one root: x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}