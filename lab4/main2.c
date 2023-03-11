#include <math.h>
#include <stdbool.h>
float getTrianglePerimeter(float a, float b, float c) {
    return a + b + c;
}

float getTriangleArea(float a, float b, float c) {
    float p = getTrianglePerimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool cyIIIestrovovanie(double a, double b, double c) {
    return (a + b > c && b + c > a && c + a > b);
}



