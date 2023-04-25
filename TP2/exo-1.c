#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int X,*A,*P1,*P2;
	int n,i,N;
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
		printf("A[%d]= \n",i);
       scanf("%d",P1);
        i++;
	}

    // l'element a éliminer
	printf("l'élément X à éliminer du tableau : \n ");
    scanf("%d", &X );

    //afichage du tableau
    printf("afichage du tableau : \n ");
    i=0;
    for(P1=A;P1<A+n;P1++){
        printf("A[%d]=%d \n ",i,*P1);
    }

    // elemination des occurrences 
    for(P2=P1=A;P1<A+n;P1++){
        *P2 = *P1;
        if(*P2 != X)
        P2++;
    }
    N=P2-A;

    // afichage du resulta 
    
    printf("afichage du tableau apre elemination des occurrences  : \n ");
    for(P1=A;P1<A+N;P1++){
        printf("A[%d]=%d \n ",i,*P1);
    }

}
