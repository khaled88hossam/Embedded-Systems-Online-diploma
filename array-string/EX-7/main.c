/*
 * main.c
 *
 *  Created on: ٢٦‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */

#include<stdio.h>
int main()
{
	char string[100];
	int i;
	printf("Enter a string:");
		fflush(stdin);fflush(stdout);
		gets(string);
		for(i=0;string[i]!='\0';i++);

			printf("length of string=%d",i);

}
