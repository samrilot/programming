#include "pch.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

void getName(char emp[]);
int getID(char emp[]);
void getHours(char emp[]);

char firstName[40];
char surname[40];
int ID;
double hours[5];

void main()
{
	char emp1[] = "Smith,Fred,2214,,5,7,8.5,10.0";
	char emp2[] = "Murphy,Sarah,1579,8.5,5,5,8,8";

	getName(emp1);
	getID(emp1);
	getHours(emp1);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

	puts("");

	getName(emp2);
	getID(emp2);
	getHours(emp2);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

}


void getName(char emp[])
{
	int i = 0;
	int j = 0;
	int comma = 0;


	for (i = 0; i < strlen(emp); i++)
	{
		if (emp[i] == ',') {
			comma++;
		}
		if (comma == 0) {
			surname[i] = emp[i];
		}
		if (comma == 1 && emp[i] != ',') {
			firstName[j] = emp[i];
			j++;
		}
	}

}

int getID(char emp[])
{
	char temp[5] = "";
	int i = 0;
	int j = 0;
	int comma = 0;

	for (i = 0; i < strlen(emp); i++) 
	{
		if (emp[i] == ',') {
			comma++;
		}
		if (comma == 2 && emp[i] != ',') {
			temp[j] = emp[i];
			j++;
		}

		ID = atoi(temp);
	}

	
	return ID;
}




void getHours(char emp[])
{
	int term = 0;
	int sub = 0;
	int i = 0;
	char hour[5] = " ";
	int day = 0;

	for (day = 0; day < 5; day++) {
		for (i; i < 40; i++) {
			if (term < 3 + day) {
				if (emp[i] == ',') term++;
				sub = i + 1;
			}
			else {
				if (emp[i] == ',' || emp[i] == '\0') break;
				hour[i - sub] = emp[i];
			}
		}
		hours[day] = atof(hour);
		hour[0] = '\0';
		hour[1] = '\0';
		hour[2] = '\0';
		hour[3] = '\0';
	}
}
