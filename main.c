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
	char string[25] = {0,};

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Enter memory length: ");
	scanf("%d", &number);
	
	printf("Enter numeric number: ");
	scanf("%d", &base);
	
	if(number < 0){
		toNumSystem(number, memlength, base, string);
		printf("Number: %s\n", string);
		Reversed_Code(string);
		Addition_Code(string, memlength, base);
	}
	else{
		toNumSystem(number, memlength, base, string);
		printf("Reversed number: %s\n", string);
		printf("Addition code: %s\n", string);
		toNumSystem(number, memlength, base, string);
	}
	return 0;
}


