#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    char surname[50];
    int year_of_birth;
} human;


int sortirovka(const void *a, const void *b) {
    human *humanA = (human *)a;
    human *humanB = (human *)b;
    return (humanA->year_of_birth - humanB->year_of_birth);
}

int main() {

    FILE *f_input = fopen("input.txt", "r");


    int count = 0;
    char buffer[100];
    while (fgets(buffer, 100, f_input) != NULL) {
        count++;
    }
    fseek(f_input, 0, SEEK_SET); 


    human *arr1 = malloc(sizeof(human) * count);
    human *arr2 = malloc(sizeof(human) * count);

    printf("dannie iz faila:\n");
    for (int i = 0; i < count; i++) {
        fscanf(f_input, "%s %s %d", arr1[i].name, arr1[i].surname, &arr1[i].year_of_birth);
        printf("%s %s, %d god\n", arr1[i].surname, arr1[i].name, arr1[i].year_of_birth);
    }

    fclose(f_input);

    memcpy(arr2, arr1, sizeof(human) * count);

    qsort(arr2, count, sizeof(human), sortirovka);


    printf("\nsorted massiv:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s, %d god\n", arr2[i].surname, arr2[i].name, arr2[i].year_of_birth);
    }

    free(arr1);
    free(arr2);

    return 0;
}