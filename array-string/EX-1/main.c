/*
 * main.c
 *
 *  Created on: ٢٤‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */

#include <stdio.h>
 int main()
 {
	 float a[2][2] , b[2][2], c[2][2];
	 int i,n ;
	 printf("Enter the elements of 1st matrix : \r\n ");
	 for(i=0;i<2;i++)
	 				{
	 					for(n=0;n<2;n++)
	 					{
	 						printf("enter a %d%d",i,n);
	 						fflush(stdin);fflush(stdout);
	 						scanf("%f",&a[i][n]);

	 					}
	 				}

		 printf("Enter the elements of 2st: matrix\r\n ");
			for(i=0;i<2;i++)
						{
							for(n=0;n<2;n++)
							{
								printf("enter b %d%d",i,n);
								fflush(stdin);fflush(stdout);
								scanf("%f",&b[i][n]);
							}
						}
			printf("sum of matrix\r\n");
			for(i=0;i<2;i++)
				 				{
				 					for(n=0;n<2;n++)
				 					{
				 						c[i][n]=a[i][n]+b[i][n];
				 						printf("%0.2f",c[i][n]);

				 					}
				 					printf("\r\n");
				 				}





 }


