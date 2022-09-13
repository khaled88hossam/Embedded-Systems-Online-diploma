/*
 * main.c
 *
 *  Created on: ١٣‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include<stdio.h>
void main()
{
	float a,b,product;
	printf("Enter two numbers\t");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	product=a*b;
	printf("product:%f",product);

}

