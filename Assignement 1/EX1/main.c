/*
 * main.c
 *
 *  Created on: ١٠‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include <stdio.h>
int main(int argc, char **argv){
	int a,b,c ;
	printf("Enter three values:");
	fflush(stdin); fflush(stdout);
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
    	if(a>c)
    		printf("the largest value is %d\r\n",a);
    	else
    		printf("the largest value is %d\r\n",c);
    }
    else
    {
    	if(b>c)
    		printf("the largest value is %d\r\n",b);
    	else
    		printf("the largest value is %d\r\n",c);
    }
}

