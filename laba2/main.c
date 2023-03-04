#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>  
int main(int argc, char *argv[]) { 
 double a, b, c, d, e, f, g, m, n, A, B; 
 printf("Enter number: "); 
 scanf("%lf", &a); 
 printf("Enter number: "); 
 scanf("%lf", &b); 
 printf("Enter number: "); 
 scanf("%lf", &c); 
 printf("Enter number: "); 
 scanf("%lf", &d); 
 printf("Enter number: "); 
 scanf("%lf", &e); 
 printf("Enter number: "); 
 scanf("%lf", &f); 
 printf("Enter number: "); 
 scanf("%lf", &g); 
 printf("Enter number: "); 
 scanf("%lf", &m); 
 printf("Enter number: "); 
 scanf("%lf", &n); 
  
 double mas[9] = { 
 a, b, c, 
 d, e, f, 
 g, m, n 
 }; 

 A = mas[0] + mas[4] + mas[8]; 
 B = mas[6] + mas[4] + mas[2]; 
 printf("%.2lf \n", A); 
 printf("%.2lf \n", B);  
  
 int x, y, z, w; 
 printf("Enter number: "); 
 scanf("%d", &x); 
 printf("Enter number: "); 
 scanf("%d", &y); 
 printf("Enter number: "); 
 scanf("%d", &z); 
 printf("Enter number: "); 
 scanf("%d", &w);  
  
  
 int massive[4] = { 
 x, y, 
 z, w 
 }; 
 
  
 for(int i = 0; i < 4; i++){ 
  if(i % 2 == 0){ 
   argc = massive[i] * x + massive[i+1] * z; 
   printf("%d ", argc); 
  } 
  if(i % 2 == 1){ 
   argc = massive[i-1] * y + massive[i] * w; 
   printf("%d \n", argc); 
  } 
 }; 
 return 0; 
}