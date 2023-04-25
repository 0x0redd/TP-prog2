#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int *A,*P1,*P2;
    int AIDE,i,n;
    do{
		printf("donner la dimention du tab \n");
		scanf("%d",&n);
	}while(n<=0);

	A=(int *)malloc(n*sizeof(int));
	if(A == NULL ){
		printf("memoire insuf \n ");
        exit(0);
	}

     // saisire les element du tab
	printf("saisire les element du tab t \n");
    i=0;
	for(P1=A;P1<A+n;P1++){
		printf("A[%d]=",i);
       scanf("%d",P1);
       printf("\n");
        i++;
	}

     //afichage du tableau
    printf("afichage du tableau : \n ");
    i=0;
    for(P1=A;P1<A+n;P1++){
        printf("A[%d]=%d \n ",i,*P1);
    }

    for (P1=A,P2=A+(n-1); P1<P2; P1++,P2--){
    AIDE = *P1;
    *P1 = *P2;
    *P2 = AIDE;
    }

    printf("afichage du tableau dans l'order inverse : \n ");
    i=0;
    for(P1=A;P1<A+n;P1++){
        printf("A[%d]=%d \n ",i,*P1);
    }
}