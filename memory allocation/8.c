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
	matris=calloc(satir,sizeof(int *));
   for(i=0;i<satir;i++){
   	matris[i]=calloc(sutun,sizeof(int)*sutun);	
   } 
   for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(i%2==0&&j%2==0){
				matris[i][j]=0;
			}else if(i%2!=0&&j%2==0){
				matris[i][j]=1;
			}
			else if(i%2==0&&j%2!=0){
				matris[i][j]=1;
			}else if(sutun-j==i){
				matris[i][j]=1;
			}else{
				matris[i][j]=0;
			}
	     	
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