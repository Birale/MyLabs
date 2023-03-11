#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[81];
	printf("Enter the line: ");
	fgets(str, 81, stdin);

	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'a' || str[i] == 'b')
		{
			str[i] = toupper(str[i]);
		}
	}

	printf("Modified line: %s", str);
	return 0;
}