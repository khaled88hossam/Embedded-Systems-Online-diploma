/*
 * MAIN.C
 *
 *  Created on: ١٤‏/٠٩‏/٢٠٢٢
 *      Author: User
 */
#include"stdio.h"
void main(){
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if((c>='a'&&C<='Z')||(c>='A'&&C<='Z'))
			printf("%c is an alphabet.",c);
	else
		printf("%c is not an alphabet.",c);
}

