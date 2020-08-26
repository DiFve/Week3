#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void changeAlphabet(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		if (word[i] >= 'a' && word[i] <= 'z')	word[i] -= 32;
		else if (word[i] >= 'A' && word[i] <= 'Z')	word[i] += 32;
		i++;
	}
}
int main()
{
	char word[99999];
	scanf("%[^\n]", word);
	changeAlphabet(word);
	printf("%s", word);
	return 0;
}