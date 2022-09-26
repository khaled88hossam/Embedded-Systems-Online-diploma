/*
 * main.c
 *
 *  Created on: ٢٦‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */
#include<stdio.h>
int main()
{
		char str[100],temp;
		int i,j=0;
		printf("\nEnter a string:");
			fflush(stdin);fflush(stdout);
			gets(str);
			 i=0;
			 j=strlen(str)-1;
			 while(i<j)
			 {
				 temp=str[i];
				 str[i]=str[j];
				 str[j]=temp;
				 i++;
				 j--;
			 }
			 printf("\nReverse string is :%s",str);
}

