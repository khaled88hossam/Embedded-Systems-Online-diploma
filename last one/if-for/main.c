/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include "stdio.h"
void main()
{
	int i;
	int k;
	int factorial=1;
	printf("enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&k);
	if(k>0)
	{
	for(i=1;i<=k;i++)
	{
	factorial=factorial*i;
	}
	printf("factorial=%d",factorial);
	}
	else
	{
		printf("ERROR!!!");
	}
}

