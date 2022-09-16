/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include "stdio.h"
void main(){
    char a;
    printf("enter a character");
    fflush(stdout); fflush(stdin);
    scanf("%c",&a);
    if((a>='a'&&a<='z'||a>='A'&&a<='Z')){
        printf("%c is an alphabet",a);
    }
    else
        printf("%c is not an alphabet",a);
}

