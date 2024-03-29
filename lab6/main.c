#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale( LC_ALL,"Russian" );
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL)
    {
        printf("Ошибка при открытии файла\n");
        return 1;
    }

    const int max_line_length = 100;

    char line[max_line_length];
    char I[50], F[50], O[50];
	int R;
    while (fgets(line, max_line_length, input_file) != NULL)
    {
        sscanf(line, "%s %s %s %d", I, F, O, &R);

        if (R > 1980)
        {
            fprintf(output_file, "%s %s %s %d\n", I, F, O, R);
        }
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}