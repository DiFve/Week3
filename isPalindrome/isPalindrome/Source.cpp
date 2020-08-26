#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}

int isPalin(int n, char* word)
{
	for (int i = 0; i < n; i++)
	{
		if (word[i] != word[n - 1 - i])
			return 0;
	}
	return 1;
}

int main()
{
	char word[99999];
	scanf("%[^\n]", &word);
	int n = strlen(word);
	if (isPalin(n, word))	printf("%s : is palindrome", word);
	else	printf("%s : is not palindrome", word);
	return 0;
}