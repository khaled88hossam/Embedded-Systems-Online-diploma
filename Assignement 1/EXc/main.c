/*
 * main.c
 *
 *  Created on: ١٣‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include <stdio.h>
void main()
{
	int a;
	int b;
	printf("Enter value of a=\t");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b=\t");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("The swapping value of a=%d\n",a);
	printf("The swapping value of b=%d\n",b);


}


