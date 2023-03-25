#include <stdio.h>
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

	char Ima[50];
	char Familiya[50];
	char otchestvo[50];
	int denrozdeniy;

	while (fscanf(spisok, " %s %s %s %d", Ima, Familiya, otchestvo, &denrozdeniy) != EOF)
	{
		if (denrozdeniy > 1980)
			fprintf(output, "%s %s %s %d\n", Ima, Familiya, otchestvo, denrozdeniy);
	}

	fclose(spisok);
	fclose(output);

	return 0;
}