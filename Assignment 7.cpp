#include "pch.h"
#include <iostream>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);

char words[][20] = { "pellet","unbilled","farmable","saturian","helens","ableptical","hesione","ecclesiarch","gazella","wick" };
int nwords = 10;

int i = 0;
int j = 0;

void main()
{
	char word[20];
	int i = 0;

	printLongestWord();

	i = findWordWithMostVowels();
	printf("Word with most vowels is: %s \n", words[i]);

	puts("enter word");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}

}

void printLongestWord()
{
	char longestWord[100];
	int length = 0;
	int i = 0;

	for (i = 0; i < nwords; i++)
	{
		if (strlen(words[i]) > length)
		{
			 length = strlen(words[i]);
			strcpy_s(longestWord, words[i]);
		}
	}

	printf("longest word is %s, with %d characters \n", longestWord, length);

}

int findWord(char word[])
{
	int i = 0;
	for (int i = 0; i < nwords; i++)
	{
		if (strcmp(words[i], word) == 0) {
			return 1;
		}
	}
	return 0;
}


int findWordWithMostVowels()
{
	int maxVowel= 0;
	int maxVowelWordId;
	int count = 0;

	for (int i = 0; i < nwords; i++) {

		int vowels = 0;
		for (int j = 0; j < strlen(words[i]); j++)
		{
			if (isVowel(words[i][j]))
				vowels++;
		}
		if (vowels > count)
		{
			count = vowels;
			maxVowelWordId = i;
		}
	}
		
	return maxVowelWordId;

}

int isVowel(char c)
{
	c = toupper(c);
	int vowel = 0;
	char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };

	for (int i = 0; i < 5; i++)
	{
		if (c = vowels[i])
			return 1;
		else
			return 0;
	}
}