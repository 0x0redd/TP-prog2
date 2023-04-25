#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void permut(int *a, int *b){
	float aux;
	aux = *a;
	*a=*b;
	*b=aux;
}
void tribul(int tab[], int n){
int c;
	do{
	c=0;
	for(int i=0;i<n-1;i++){
		if(tab[i]>tab[i+1]){
		permut( &tab[i] , &tab[i+1]);
		c++; }
	}
}while(c);
}

main(){
	int n,*T,*P;
	int i;

	printf("donner la dimention du tab  \n ");
	scanf("%d",&n);

	T=(int*)malloc(n*sizeof(int));
	for(P=T;P<T+n;P++){
		printf("T[%d]= \n ",P-T);
		scanf("%d",P);
	}

	for(P=T;P<T+n;P++){
		printf("T[%d]= %d \n ",P-T,*P);
	}
	tribul(T,n);
	printf("apre le tri \n");

	for(P=T;P<T+n;P++){
		printf("T[%d]= %d \n ",P-T,*P);

	}
}

