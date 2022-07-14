/*
* @file functions.h
* @author Сериця Владислав, 515i1
* @date 12 липня 2022
*/

#ifndef FUNCTIONS
#define FUNCTIONS

int pow2(int a, int b){
	int n = 1;
	for(int i=0;i<b;++i){
		n *= a;
	}
	return n;
}

void toNumSystem(int a, int memlength, int base, char* string)
{
    memlength--;
    int k = 0;
    char tmp;

	if(a < 0){
		a = -a;
	}

    while (a > 1)
    {
        string[k++] = (a % base) + '0';
        a = a / base;
	if(k > memlength){
		printf("No memory!\n");
		exit(-1);
	}
    }
    string[k++] = a + '0';
    string[k] = '\0';

    for (int i = 0; i < k / 2; i++)
    {
        tmp = string[i];
        string[i] = string[k - 1 - i];
        string[k - 1 - i] = tmp;
    }
}

void Reversed_Code(char* string){
	for(int i=0;i<strlen(string);++i){
		if(string[i] == '1'){
			string[i] = '0';
		}
		else{
			string[i] = '1';
		}
	}
	printf("Revesed number: %s\n", string);
}	

void Addition_Code(char* string, int memlength, int base){
	int rank = strlen(string);
	int number = 0;
	char* str = (char*) malloc(24);

	for(int i=rank;i>0;--i){
		if(string[i] == '1'){
			number += pow2(base, rank-i-1);
		}
	}
	number++;
	toNumSystem(number, memlength, base, str);
	printf("Addition code: %s\n", str);
	free(str);
}



#endif
