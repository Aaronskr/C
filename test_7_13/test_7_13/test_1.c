#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = { "abcde" };
	printf("%d\n", sizeof(arr));
	printf("%d\n", strlen(arr));

	return 0;
}