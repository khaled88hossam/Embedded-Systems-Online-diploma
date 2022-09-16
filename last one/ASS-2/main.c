/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include <stdio.h>
 int main()
{
	int a;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
 ((a%2)==0)? printf("%d is even",a):printf("%d is odd",a);
}


