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
	int sum;
	printf("enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
	sum+=i;
	}
	printf("sum=%d",sum);

}

