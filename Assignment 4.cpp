#include "pch.h"
#include <iostream>

int main()
{
	double num[11], min = 0, max = 0, average = 0, sum = 0;
	int i;

	printf("Program to calculate average, min max of up to 10 floating point numbers");
	printf("\nEnter up to 10  numbers <0.0 to end input>");
	printf("\n_________________\n");

	for (i = 1; i < 11; i++)
	{
		printf("#%d:\t", i);
		scanf_s("%lf", &num[i]);
		sum += num[i];

		if (i == 1)
		{
			max = num[i];
			min = num[i];
		}

		if (num[1] == 0.0)
		{
			printf("no numbers entered - quiting");
			exit(0);
		}

		if (num[i] == 0.0)
		{
			break;
		}

		if (num[i] < min)
		{
			min = num[i];
		}

		if (num[i] > max)
		{
			max = num[i];
		}

	}

	average = sum / i;
	printf("Average = %.2lf, Max = %.2lf, Min = %.2lf", average, max, min);

}