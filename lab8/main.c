#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_PEOPLE 100

struct person {
    char name[MAX_NAME_LEN];
    char surname[MAX_NAME_LEN];
    int birth_year;
    char gender;
    int height;
};

int compare_birth_year(const void *p1, const void *p2) {
    const struct person *person1 = p1;
    const struct person *person2 = p2;
    return person1->birth_year - person2->birth_year;
}

int compare_name(const void *p1, const void *p2) {
    const struct person *person1 = p1;
    const struct person *person2 = p2;
    return strcmp(person1->name, person2->name);
}

int compare_surname(const void *p1, const void *p2) {
    const struct person *person1 = p1;
    const struct person *person2 = p2;
    return strcmp(person1->surname, person2->surname);
}

int compare_gender(const void *p1, const void *p2) {
    const struct person *person1 = p1;
    const struct person *person2 = p2;
    return person1->gender - person2->gender;
}

int compare_height(const void *p1, const void *p2) {
    const struct person *person1 = p1;
    const struct person *person2 = p2;
    return person1->height - person2->height;
}


int main() {
    FILE *fp;
    char filename[] = "people.txt";
    char line[100];
    int num_people = 0;
    struct person people[MAX_PEOPLE];
    int sort_option;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Failed to open file: %s\n", filename);
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%s %s %d %c %d",
            people[num_people].surname,
            people[num_people].name,
            &people[num_people].birth_year,
            &people[num_people].gender,
            &people[num_people].height);
        num_people++;
    }

    printf("Sorted list:\n");
    for (int i = 0; i < num_people; i++) {
        printf("%s %s %d %c %d\n", people[i].surname, people[i].name, people[i].birth_year, people[i].gender, people[i].height);
    }

    printf("Select sort option (1=birth year, 2=name, 3=surname, 4=gender, 5=height): ");
    scanf("%d", &sort_option);

    switch (sort_option) {
        case 1:
            qsort(people, num_people, sizeof(struct person), compare_birth_year);
            break;
        case 2:
            qsort(people, num_people, sizeof(struct person), compare_name);
            break;
        case 3:
            qsort(people, num_people, sizeof(struct person), compare_surname);
            break;
        case 4:
            qsort(people, num_people, sizeof(struct person), compare_gender);
            break;
        case 5:
            qsort(people, num_people, sizeof(struct person), compare_height);
            break;
        default:
            printf("Invalid sort option.\n");
            return 1;
    }

    printf("Sorted list:\n");
    for (int i = 0; i < num_people; i++) {
        printf("%s %s %d %c %d\n", people[i].surname, people[i].name, people[i].birth_year, people[i].gender, people[i].height);
    }

    fclose(fp);
    return 0;
}