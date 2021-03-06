#include "pch.h"
#include <iostream>
#include "stdio.h"
#include "string.h"


FILE *openFile(char *fileName, char *mode);
void closeFile(FILE *fptr);
float readData(FILE *fptr);
char userChoice[20];

void main(void)
{
	FILE *fptr;
	fptr = openFile("C:\Users\Sam\Documents\CS&IT\Programming", "r");
	puts("Enter product name <or return to quit>:");
	gets_s(userChoice);
	int input = strlen(userChoice);
	if (input == 0) {
		return;
	}
	while (input != 0)
	{
		readData(fptr);
		fptr = openFile("C:\Users\Sam\Documents\CS&IT\Programming", "r");
		puts("Enter product name <or return to quit>: \n");
		gets_s(userChoice);
		int input = strlen(userChoice);
		if (input == 0) {
			return;
		}
	}
	closeFile(fptr);
}

float readData(FILE *fptr)
{
	char region[40], rep[40], item[40], date[40], line[200];
	float unit, cost, total, totalItem = 0;
	fgets(line, 200, fptr);
	int val;
	while (!feof(fptr))
	{
		fscanf(fptr, "%s\t%s\t%s\t%s\t%f\t%f\t%f", &date, region, rep, item, &unit, &cost, &total);
		val = strcmp(userChoice, item);
		if (val == 0)
		{
			totalItem = totalItem + total;
		}
	}
	closeFile(fptr);
	printf("Total Sales for %s %.2f \n", userChoice, totalItem);
	return totalItem;
}

FILE * openFile(char *fileName, char *mode)
{
	FILE *fptr = fopen(fileName, mode);

	if (fptr == NULL)
	{
		printf("Error opening file!\n");
	}


	return fptr;
}

void closeFile(FILE *fptr)
{
	fclose(fptr);
}