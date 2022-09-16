/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include "stdio.h"
void main(){
    char alphabet;
    printf("enter a charater");
    fflush(stdout);fflush(stdin);
    scanf("%c",&alphabet);
    switch (alphabet){
    case 'a':
    {
        printf("alphabet is vowel");
    }
    break;
    case 'e':
    {
        printf("alphabet is vowel");
    }
    break;
    case'i':
    {
        printf("alphabet is vowel");
    }
    break;
    case'o':
    {
        printf("alphabet is vowel");
    }
    break;
    case'u':
    {
        printf("alphabet is vowel");
    }
    break;
    default:
        printf("alphabet is constant");
        break;
    }
}
