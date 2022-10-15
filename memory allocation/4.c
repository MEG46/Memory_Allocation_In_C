#include <stdio.h>
#include <stdlib.h>
int main(){
	int dizi[10];
	float dizi1[10];
	char dizi2[10];
	double dizi3[10];
	printf("Ten Elements Array Size Between Data Types :\n");
	printf("\n------------------------------------------\n\n");
	printf("Int :\n");
	printf("\n------------------------------------------\n\n");
	printf("Int Byte Size : %d byte\n",sizeof(dizi));
	printf("\n------------------------------------------\n\n");
	printf("Float :\n");
	printf("\n------------------------------------------\n\n");
	printf("Float Byte Size : %d byte\n",sizeof(dizi1));
	printf("\n------------------------------------------\n\n");
	printf("Double :\n");
	printf("\n------------------------------------------\n\n");
	printf("Double Byte Size : %d byte\n",sizeof(dizi3));
	printf("\n------------------------------------------\n\n");
	printf("Char :\n");
	printf("\n------------------------------------------\n\n");
	printf("Char Byte Size : %d byte\n",sizeof(dizi2));
	return 0;
}


