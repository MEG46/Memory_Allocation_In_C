#include <stdio.h>
#include <stdlib.h>
int main(){
	int num=123;
	int *ptr=&num;
	int **ptrtoptr=&ptr;
	printf("\n---------------------------\n\n");
	printf("Num Value : %d\n",num);
	printf("\n---------------------------\n\n");
	printf("Ptr Value : %d\n",*ptr);
	printf("\n---------------------------\n\n");
	printf("PtrToPtr Value : %d\n",**ptrtoptr);
	printf("\n---------------------------\n\n");
	printf("Num Value : %#X\n",&num);
	printf("\n---------------------------\n\n");
	printf("Ptr Value : %#X\n",ptr);
	printf("\n---------------------------\n\n");
	printf("PtrToPtr Value : %#X\n",*ptrtoptr);
	printf("\n---------------------------\n\n");
	return 0;
	
}