/*
* @file functions.h
* @author Сериця Владислав, 515i1
* @date 12 липня 2022
*/

#ifndef FUNCTIONS
#define FUNCTIONS

int pow2(int y){
	int result = 1;
	for(int i=0;i<y;++i){
		result *= 2;
	}
	return result;
}

int toNumSystem(int a, int memlength, int base)
{
    int numberbackup = a;
    int n = 100;
    int flag = 0;
    char* c; 
    c = (char *)malloc(n * sizeof(char));
    int k = 0;

	if(a < 0){
		a = -a;
		flag = 1;
	}

    while (a > 1)
    {
        c[k++] = (a % base) + '0';
        a = a / base;
    }
    c[k++] = a + '0';
    c[k] = '\0';
    char tmp;

    printf("K = %d\nMemlength = %d", k, memlength);
    if(k > memlength){
	printf("Memory length is too small!\n");
	exit(-1);
    }


    for (int i = 0; i < k / 2; i++)
    {
        tmp = c[i];
        c[i] = c[k - 1 - i];
        c[k - 1 - i] = tmp;
    }
    printf("In %d numeric system: ", base);

	if(numberbackup < 0) printf("%d", base-1);
	else 	  printf("0");

for(int i=0;i<memlength-k;i++){
	printf("0");
}

    for (int i = 0; i < memlength; i++)
        printf("%c", c[i]);
    printf("\n");
    free(c);
    return k;
}


void Convert_to_numeral_system(char* string, int size, int number, int base){
	return;
}
 
#endif
