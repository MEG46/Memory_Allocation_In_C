#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	char c;
	int chsnnum;
	int *dizi;
	int *ptr,*ptr2,*lower;
	int num;
	int i=0;
	printf("Please enter a number : ");
	scanf("%d",&num);
	fflush(stdin);
	dizi=(int *)malloc(sizeof(int)*num);
	for(ptr=dizi;ptr<dizi+num;ptr++){
		*ptr=rand()%30;
	}
	printf("\n\n-------------------------------\n\n");
	printf("Before Binary Search :");
	printf("\n\n-------------------------------\n\n");
	for(ptr=dizi;ptr<dizi+num;ptr++){
		printf("%d\t",*ptr);
	}
	printf("\n\n-------------------------------\n\n");
	fflush(stdin);
	printf("Please enter the number which you want to find in array: ");
	scanf("%d",&chsnnum);
	fflush(stdin);
       for(ptr=dizi;ptr<dizi+num;ptr++){
	        if(*ptr==chsnnum){
	        	printf("%d is included in array.\n",chsnnum);
	        	return 0;
			}
}
printf("%d is not included in the array!\n",chsnnum);

	return 0;
}