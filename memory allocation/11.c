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
	fflush(stdin);
	printf("\n\n");
	printf("Please enter your procees : ");
	printf("\n(B / b = Bigger Number Finding)\n");
	printf("\n(L / l = Smaller Number Finding) : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Please enter the th number which you want to find in array: ");
	scanf("%d",&chsnnum);
	fflush(stdin);
	if(num<chsnnum){
		printf("Invalid Process!\n");
		return 0;
    }
    if(c=='B'||c=='b'&&num==chsnnum){
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
		printf("%d. Bigger Number of An Array : %d\n",chsnnum,dizi[0]);
	return 0;
}
if(c=='L'||c=='l'&&num==chsnnum){
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
	   printf("\n\n-------------------------------\n\n");
	   printf("%d. Lower Number of An Array : %d\n",chsnnum,dizi[chsnnum-1]);
	   return 0;
}
	if(c=='B'||c=='b'){
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
		printf("%d. Bigger Number of An Array : %d\n",chsnnum,dizi[num-chsnnum]);
}
else if(c=='L'||c=='l'){
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
	   printf("\n\n-------------------------------\n\n");
	   printf("%d. Lower Number of An Array : %d\n",chsnnum,dizi[chsnnum-1]);
	}else{
		printf("Invalid Process!\n");
}
	printf("\n\n-------------------------------\n\n");
	return 0;
}