/*
 * main.c
 *
 *  Created on: ٢٣‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */
#include<stdio.h>
int main()
{
	int array[100],i,n,r,location;
	printf("Enter no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i+1]);
	}
	printf("Enter the element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);

	printf("Enter the location :");
	fflush(stdin);fflush(stdout);
		scanf("%d",&location);

		for(i=n;i>=location;i--)
		{
			array[i]=array[i-1];

		}
		array[location-1]=r;
		for(i=0;i<n;i++)
		{
			printf("%d",array[i]);
		}

}


