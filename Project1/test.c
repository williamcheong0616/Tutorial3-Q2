#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)



void main(void)
{
	int numberOne;
	int numberTwo;
	int numberThree;
	int numberFour;
	int sumOfAll;
	int productOfAll;


	printf("Please enter four integer:");
	scanf("%d,%d,%d,%d\n", &numberOne, &numberTwo, &numberThree, &numberFour);

	//process

	sumOfAll = numberOne + numberTwo + numberThree + numberFour;
	productOfAll = numberOne * numberTwo * numberThree * numberFour;
	//output

	printf("Sum Of All: %10d\n", sumOfAll);
	printf("Product Of All: %10d\n", productOfAll);

	system("pause");
}