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
int main()
{
	char word[99999];
	scanf("%[^\n]", word);
	int all[123];
	for (int i = 0; i <= 122; i++)	all[i] = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')	all[word[i] + 32]++;
		else	all[word[i]]++;
	}
	int sumVowel = 0, sumAlp = 0, sumWord = 0, sumNum = 0;
	for (int i = 97; i <= 122; i++)
	{
		if (i == 97 || i == 101 || i == 105 || i == 111 || i == 117) { sumVowel += all[i]; }
		sumAlp += all[i];
	}
	for (int i = 48; i <= 57; i++)	sumNum += all[i];
	sumWord += all[32] + 1;
	printf("Alphabet = %d\n", sumAlp - sumVowel);
	printf("Vowel = %d\n", sumVowel);
	printf("Number = %d\n", sumNum);
	printf("Word = %d\n", sumWord);
	return 0;
}