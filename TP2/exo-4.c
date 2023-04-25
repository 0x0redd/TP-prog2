#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int det(int *A , int n){
    int *P1,min,max,i=0;
    max=*A;
    min=*A;
    for(P1=A;i<n;P1++){
        if(min>*P1)
        min=*P1;
        if(max<*P1)
        max=*P1;
        i++;
    }
    printf("la valeur maximale est %d \n ",max);
    printf("la valeur minimal est %d \n ",min);
}

int main(){
    int *A,*P1,i,n;

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

    det(A,n);
}
