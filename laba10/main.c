#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define AVG(arr, len) ({ \
    int sum = 0; \
    int i; \
    for (i = 0; i < len; i++) { \
        sum += arr[i]; \
    } \
    (float) sum / len; \
})

int main() {
    int n;
    printf("colichestvo chisel: ");
    scanf("%d", &n);

    int numbers[n];
    printf("vvedite %d chisel: ", n);
 
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_num = numbers[0];
    for (i = 1; i < n; i++) {
        max_num = MAX(max_num, numbers[i]);
    }

    printf("max: %d\n", max_num);
    printf("average: %f", AVG(numbers, n));
    return 0;
}