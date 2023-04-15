#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    const int max_line_length = 256;

    char line[max_line_length];
    char *pch;
    int year_of_birth; 

    while (fgets(line, max_line_length, input_file) != NULL)
    {
        pch = strchr(line, ' '); 

        if (pch != NULL) 
        {
            year_of_birth = atoi(pch+1);

            if (year_of_birth > 1980) 
            {
                fprintf(output_file, "%s", line);
            }
        }
    }

    fclose(input_file); 
    fclose(output_file);

    return 0; 
}