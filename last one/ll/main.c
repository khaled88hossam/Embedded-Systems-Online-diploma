/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include "stdio.h"
void main()
{
	char o;
	float num1;
	float num2;
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operatnds:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(o)
	{
	case '+':
		printf("%f + %f=%f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%f - %f=%f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%f * %f=%f",num1,num2,num1*num2);
		break;
	case 'divide':
		printf("%f / %f=%f",num1,num2,num1/num2);
		break;
	default:
		printf("ERROR!!!");
	}
}

