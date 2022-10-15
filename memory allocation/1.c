#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr;
	ptr=(int *)malloc(sizeof(int));
	*ptr=15;
	printf("Value Declaration and Adress Booking with malloc() :\n");
	printf("\n------------------------------------------\n\n");
	printf("Value : %d\n",*ptr);
	printf("Adress Value : %#X\n",ptr);
	printf("Byte Size : %d byte\n",sizeof(*ptr));
	free(ptr);
	printf("\n------------------------------------------\n\n");
	printf("After Using free() Function :\n");
	printf("\n------------------------------------------\n\n");
	printf("Value : %d\n",*ptr);
	printf("Adress Value : %#X\n",ptr);
	printf("Byte Size : %d byte\n",sizeof(*ptr));
	return 0;
}