#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int *matris;
	int satir;
	int i;
	srand(time(NULL));
	printf("Please enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
	matris=calloc(satir,sizeof(int *));
   for(i=0;i<satir;i++){
			if(i%2==0){
				matris[i]=0;
			}else{
				matris[i]=1;
			}
	     	
    }
	for(i=0;i<satir;i++){
		printf("%d\t",matris[i]);
}
printf("\nPlease enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
matris=(int *)realloc(matris,satir*sizeof(int));
   for(i=0;i<satir;i++){
			if(i%2==0){
				matris[i]=0;
			}else{
				matris[i]=1;
			}
	     	
    }
	for(i=0;i<satir;i++){
		printf("%d\t",matris[i]);
	
}
    free(matris);
   return 0;
}