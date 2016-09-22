#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int main()
{
	char formula[MAX_STRING_LENGTH];
	char formulaCopy[MAX_STRING_LENGTH];
	char cDelimiterPlus[] = "+";
	char cDelimiterMinus[] = "-";
	char cDelimiterMult[] = "*";
	char cDelimiterDiv[] = "/";
	char *context = NULL;
	char *sums[MAX_STRING_LENGTH];
	int iIndex = 0;

	printf("Please enter your formula: ");

	do
	{
		scanf_s("%s", formula, sizeof(formula));
	} while (getchar() != '\n');

	strcpy_s(formulaCopy, MAX_STRING_LENGTH, formula);

	sums[iIndex++] = strtok_s(formulaCopy, &cDelimiterPlus, &context);

	while (sums[iIndex - 1] != NULL)
	{
		sums[iIndex++] = strtok_s(NULL, &cDelimiterPlus, &context);
	}

	for (int i = 0; i < iIndex - 1; i++)
	{
		printf_s("%s\n", sums[i]);
	}

	getchar();

	return 0;
}