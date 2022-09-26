/*
 * main.c
 *
 *  Created on: ٢٤‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */

#include <stdio.h>
int main()
{
	float a[100][100], trans[100][100];
		int r,c,n,i;
		printf("Enter rows and column of matrix:");
		fflush(stdin); fflush(stdout);
		scanf("%d %d",&n,&i);
		printf("Enter elements of matrix :\n ");
		for(r=0;r<n;r++)
		{
			for(c=0;c<i;c++)
			{
				printf("Enter elements of a %d%d :",r+1,c+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&a[r][c]);

			}
		}
		printf("Entered matrix :\n");
		for(r=0;r<n;r++)
			{
				for(c=0;c<i;c++)
				{
					printf("%0.0f ",a[r][c]);
				}
				printf("\r\n");
			}
		printf("transpose matrix :\n");
		for(r=0;r<n;r++)
				{
					for(c=0;c<i;c++)
					{
						trans[r][c]=a[c][r];

					}
				}

		for(r=0;r<n;r++)
			{
				for(c=0;c<i;c++)
				{
					printf("%0.0f ",trans[r][c]);
				}
				printf("\r\n");

			}

}

