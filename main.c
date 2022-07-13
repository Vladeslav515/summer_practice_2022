/*
* @file main.c
* @author Сериця Владислав, 515і1 
* @date 12 липня 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"

int main(int argc, const char* argv[]){
	int number = -120;
	int memlength = 8;
	int base = 2;
	/*
	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Enter memory length: ");
	scanf("%d", &number);
	
	printf("Enter numeric number: ");
	scanf("%d", &base);
	*/
	int count = toNumSystem(number, memlength, base);

	int power = pow2(count);
	if(number < 0){
		toNumSystem(-power+number, memlength, base);
		toNumSystem(-power+number+1, memlength, base);
	}
	else{
		toNumSystem(number, memlength, base);
		toNumSystem(number, memlength, base);
	}

	return 0;
}


