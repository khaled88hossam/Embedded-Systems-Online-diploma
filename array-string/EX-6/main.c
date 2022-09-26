/*
 * main.c
 *
 *  Created on: ٢٦‏/٠٩‏/٢٠٢٢
 *      Author: Khaled
 */
#include<stdio.h>
int main()
{
	char string[100],ch;
	int count=0;
	int i;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency :");
	fflush(stdin);fflush(stdout);
		scanf("%c",&ch);

		for(i=0;string[i]!='\0';i++)
		{
			if(ch==string[i])
				count=count+1;
		}
		printf("frequency of %c =%d",ch,count);
}

