#include "main3.c"
#include <math.h>

float getTrianglePerimeter(float a, float b, float c) {
    return a + b + c;
}

float getTriangleArea(float a, float b, float c) {
    float p = getTrianglePerimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}