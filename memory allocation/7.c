#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int **matris;
	int satir,sutun;
	int i,j;
	srand(time(NULL));
	printf("Please enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	fflush(stdin);
	matris=(int **)malloc(sizeof(int *)* satir);
   for(i=0;i<satir;i++){
   	matris[i]=(int *)malloc(sizeof(int)*sutun);	
   } 
   for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
	     	matris[i][j]=rand()%20;
    }
    }
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		printf("%d\t",matris[i][j]);
	
    }
    printf("\n");
}
 for(j=0;j<satir;j++){
		free(matris[i]);
	
    }
    free(matris);
   return 0;
}