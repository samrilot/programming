

#include "pch.h"
#include <iostream>
#include "stdlib.h"

struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	int i;

	struct customer customers[10];

	populateCustomers(customers, 10);
	printf("year is %d", getYear());
	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month)
{
	int day;

	if (month = 2) {
		day = (rand() % 28) + 1;
	}
	if (month = 4 || 6 || 9 || 11) {
		day = (rand() % 30) + 1;
	}
	if (month = 1 || 3 || 5 || 7 || 8 || 10 || 12) {
		day = (rand() % 31) + 1;
	}

	return day;
}

int getMonth()
{
	int month;

	month = (rand() % 12) + 1;

	return month;
}

int getYear()
{
	int year;

	year = (rand() % 4) + 2013;

	return year;
}

double getBalance()
{
	// this function should return a random balance, for example between -5000 and +5000
	return balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;

	// simply print out the array of customers, as neatly formatted as possible

	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = { "Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce" };

	for (i = 0; i < nCustomers; i++)
	{
		strcpy(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		// use the functions above to get values for the rest of the data structure
	}

	return;

}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i;

	// find the customer structure based on the account number, process the transaction (change the balance)
	// and return 1
	// if customer account number not found, return 0

	return 0;
}