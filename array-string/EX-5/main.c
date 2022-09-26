/*
 * main.c
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */
#include<stdio.h>
int main()
{
	int array[100],i,n,searched;
	printf("Enter no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i+1]);
	}
	printf("Enter the element to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&searched);

	i=0;
			while(i<n&&searched!=array[i])
			{
				i++;
			}
	if(i<n)
	{
		printf("number found at the location=%d",i);
	}
}

