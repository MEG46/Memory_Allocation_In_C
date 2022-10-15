#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int num,num1,num2,num3;
	printf("Enter the desired element number of array for integer : ");
	scanf("%d",&num);
	fflush(stdin);
	printf("Enter the desired element number of array for float : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Enter the desired element number of array for char : ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("Enter the desired element number of array for double : ");
	scanf("%d",&num3);
	fflush(stdin);
	/*for(i=0;i<num;i++){
		dizi[i]=rand()%20;
	}
	for(i=0;i<num1;i++){
		dizi1[i]=(rand()%20)*1.37;
	}
	for(i=0;i<num2;i++){
		dizi2[i]=i+'A';
	}
	for(i=0;i<num3;i++){
		dizi3[i]=(rand()%20)*1.3753;
	}*/
	int count=0;
	int *dizi=(int *)malloc(sizeof(int)*num);
	float *dizi1=(int *)malloc(sizeof(int)*num1);
	char *dizi2=(int *)malloc(sizeof(int)*num2);
	double *dizi3=(int *)malloc(sizeof(int)*num3);
	int *ptr=dizi;
	float *ptr1=dizi1;
	char *ptr2=dizi2;
	double *ptr3=dizi3;
	for(;ptr<dizi+num;ptr++){
		*ptr=rand()%20;
	}
	for(;ptr1<dizi1+num1;ptr1++){
		*ptr1=count*1.37;
		count++;
	}
	for(;ptr2<dizi2+num2;ptr2++){
		*ptr2=count+'A';
		count++;
	}
	for(;ptr3<dizi3+num3;ptr3++){
		*ptr3=count*1.3753;
		count++;
	}
	fflush(stdin);
	printf("Ten Elements Array Between Data Types :\n");
	printf("\n------------------------------------------\n\n");
	printf("Int :\n");
	printf("\n------------------------------------------\n\n");
    for(ptr=dizi;ptr<dizi+num;ptr++){
		printf("%d\t",*ptr);
	}
	printf("\n------------------------------------------\n\n");
	printf("Float :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr1=dizi1;ptr1<dizi1+num1;ptr1++){
		printf("%f\t",*ptr1);
	}
	printf("\n------------------------------------------\n\n");
	printf("Double :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr3=dizi3;ptr3<dizi3+num3;ptr3++){
		printf("%lf\t",*ptr3);
	}
	printf("\n------------------------------------------\n\n");
	printf("Char :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr2=dizi2;ptr2<dizi2+num2;ptr2++){
		printf("%c\t",*ptr2);
	}
	
    printf("\n------------------------------------------\n\n");
	printf("Reverse :\n");
	printf("\n------------------------------------------\n\n");
	printf("Int :\n");
	printf("\n------------------------------------------\n\n");
    for(ptr=dizi+num-1;dizi<=ptr;ptr--){
		printf("%d\t",*ptr);
	}
	printf("\n------------------------------------------\n\n");
	printf("Float :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr1=dizi1+num1-1;dizi1<=ptr1;ptr1--){
		printf("%f\t",*ptr1);
	}
	printf("\n------------------------------------------\n\n");
	printf("Double :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr3=dizi3+num3-1;dizi3<=ptr3;ptr3--){
		printf("%lf\t",*ptr3);
	}
	printf("\n------------------------------------------\n\n");
	printf("Char :\n");
	printf("\n------------------------------------------\n\n");
	for(ptr2=dizi2+num2-1;dizi2<=ptr2;ptr2--){
		printf("%c\t",*ptr2);
	}
	free(dizi);
	free(dizi1);
	free(dizi2);
	free(dizi3);
	return 0;
}