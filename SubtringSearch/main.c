#define _CRT_SECURE_NO_WARNINGS

#include "StringSearch.h"
#include <stdio.h>
#include <string.h>

extern const size_t NOT_A_POSITION;

int main()
{
	//Поиск подстроки:
	char str[] = "admaddadadmadmad";
	char pattern[] = "dad";

	printf("TEXT:    \"%s\"\n", str);
	printf("PATTERN: \"%s\"\n", pattern);
	printf("\n");

	printf("RESULT:\n");

	size_t position = BM(str, pattern);

	//Печать массива:
	size_t n = strlen(str);

	for (size_t i = 0; i < n; ++i)
	{
		printf("%4zu", i);
	}
	printf("\n");

	for (size_t i = 0; i < n; ++i)
	{
		printf("%4c", str[i]);
	}
	printf("\n");

	//Печать позиции:
	if (position != NOT_A_POSITION)
	{
		for (size_t i = 0; i < position; ++i)
		{
			printf("%4c", ' ');
		}
		printf("%4c", '^');
		printf("\n");

		for (size_t i = 0; i < position; ++i)
		{
			printf("%4c", ' ');
		}
		printf("%4c", '|');
		printf("\n");

		for (size_t i = 0; i < position; ++i)
		{
			printf("%4c", ' ');
		}
		printf("%4zu", position);
		printf("\n");
	}
	else
		printf("Substring is NOT found.\n");

	return 0;
}