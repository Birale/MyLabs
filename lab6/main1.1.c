#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    FILE* spisok = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");

    if (spisok == NULL || output == NULL)
    {
        printf("Файл не открывается.");
        return 1;
    }

    char buffer[1024];
    char* token;
    char* firstName, * lastName, * middleName;
    int birthYear;

    while (fgets(buffer, sizeof(buffer), spisok) != NULL)
    {
        token = strtok(buffer, " ");
        firstName = token;
        token = strtok(NULL, " ");
        lastName = token;
        token = strtok(NULL, " ")
        middleName = token;
        token = strtok(NULL, " ");
        birthYear = atoi(token);

        if (birthYear > 1980)
            fprintf(output, "%s %s %s %d\n", firstName, lastName, middleName, birthYear);
    }

    fclose(spisok);
    fclose(output);

    return 0;
}