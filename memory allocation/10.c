#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
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
	printf("Normal Array :");
	printf("\n\n-------------------------------\n\n");
	for(ptr=dizi;ptr<dizi+num;ptr++){
		printf("%d\t",*ptr);
	}
	printf("\n\n-------------------------------\n\n");
	printf("From Lower Element To Bigger Element :");
	printf("\n\n-------------------------------\n\n");
for(ptr=dizi;ptr<dizi+num;ptr++){
	lower=dizi+num-1;
	for(ptr2=ptr;ptr2<dizi+num;ptr2++){
		
		if(*ptr2<*lower){
			lower=ptr2;
		}
	}
	int gecici=*lower;
	*lower=*ptr;
	*ptr=gecici;
}
	for(ptr=dizi;ptr<dizi+num;ptr++){
		printf("%d\t",*ptr);
	}
	printf("\n\n-------------------------------\n\n");
	printf("From Bigger Element To Lower Element :");
	printf("\n\n-------------------------------\n\n");
	for(ptr=dizi+num-1;dizi<=ptr;ptr--){
		printf("%d\t",*ptr);
	}
	printf("\n\n-------------------------------\n\n");
	return 0;
}