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
	int number;
	int memlength;
	int base;
	char string[25] = {0,};

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Enter memory length: ");
	scanf("%d", &memlength);
	
	printf("Enter numeric number: ");
	scanf("%d", &base);

	printf("\n");

	toNumSystem(number, memlength, base, string);
	printf("Number: %s\n", string);

	if(number < 0){
		Reversed_Code(string);
		Addition_Code(string, memlength, base);
	}
	else{
		printf("positive\n");
		toNumSystem(number, memlength, base, string);
		printf("Reversed number: %s\n", string);
		printf("Addition code: %s\n", string);
		toNumSystem(number, memlength, base, string);
	}
	return 0;
}


