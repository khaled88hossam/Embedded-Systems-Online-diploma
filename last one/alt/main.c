/*
 * main.c
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include"stdio.h"
void main(){
    float a,b,c;
    printf("Enter 3 numbers");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f",&a,&b,&c);
    if (a>b&&a>c){
        printf("%f is the largest number",a);
    }
    else if(b>a&&b>c){
        printf("%f is the largest number",b);
    }
    else if(c>a&&c>b){
        printf("%f is the largest number",c);
    }
}

