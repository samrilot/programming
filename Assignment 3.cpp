#include "pch.h"
#include <iostream>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
	int i = 1; // i is used for the loop
	int yesOrNo; 
	int choice, side, area, height, width, topWidth, radius, angle;

	while (i == 1) {
		printf("\nArea Calculator ");
		printf("\nEnter Choice: ");
		printf("\n1 <Triangle>");
		printf("\n2 <Square>");
		printf("\n3 <Rectangle>");
		printf("\n4 <Parallelogram>");
		printf("\n5 <Trapezoid>");
		printf("\n6 <Circle>");
		printf("\n7 <Ellipse>");
		printf("\n8 <Sector>");
		printf("\nChoice: ");
		scanf_s("%d", &choice);

		// switch statements are an easy way of executing different code depending on the input value. e.g. the input value 1 will execute the case 1 code.

		switch (choice) {
		case 1:
			printf("Enter base width: ");
			scanf_s("%d", &width);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = 0.5*width*height;
			printf("Area: %d", area);
			break; // break is used to break the cycle of code. In this case it will stop the other parts of code in the switch from executing.

		case 2:
			printf("Enter width: ");
			scanf_s("%d", &width);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = width * height;
			printf("Area: %d", area);
			break;

		case 3:
			printf("Enter base width: ");
			scanf_s("%d", &width);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = width * height;
			printf("Area: %d", area);
			break;

		case 4:
			printf("Enter base width: ");
			scanf_s("%d", &width);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = width * height;
			printf("Area: %d", area);
			break;

		case 5:
			printf("Enter base width: ");
			scanf_s("%d", &width);
			printf("Enter top width: ");
			scanf_s("%d", &topWidth);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = width * height * topWidth;
			printf("Area: %d", area);
			break;

		case 6:
			printf("Enter radius: ");
			scanf_s("%d", &radius);
			area = (M_PI) * (radius ^ 2);
			printf("Area: %d", area);
			break;

		case 7:
			printf("Enter base width: ");
			scanf_s("%d", &width);
			printf("Enter height: ");
			scanf_s("%d", &height);
			area = (M_PI) * (0.5 * width) * (0.5 * height);
			printf("Area: %d", area);
			break;

		case 8:
			printf("Enter base radius: ");
			scanf_s("%d", &radius);
			printf("Enter angle: ");
			scanf_s("%d", &angle);
			area = 0.5 * (radius ^ 2) * angle;
			printf("Area: %d", area);
			break;

		}

		// A yes/no string using characters is difficult to achieve in C compared to using integers, i.e. 1/0

		printf("\n Try Another? ");
		printf("Press 1 for Yes, 0 for No: ");
		scanf_s("%d", &yesOrNo);

		if (yesOrNo == 1){
			i = 1;
		}
		else {
			i = 0;
		}
			
	}

}