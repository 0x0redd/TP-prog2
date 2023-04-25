#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void permut(float *a, float *b){
	float aux;
	aux = *a;
	*a=*b;
	*b=aux;
}
void rangmintab(int n, int *p , int tab){
	int indice=p;
	  for(int i =p+1 ; i<n ;i++)
	  if(tab[i]>tab[indice]){
		indice=i;
		return indice;}
		
}
void trisel(int n, int tab[]){
	int min
	for(int p=0; p<n-1;p++){
		min=rangmin(n,p,tab);
		permut(tab+min,tab+p)
	}
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
	teisel(T,n);
	printf("apre le tri \n");

	for(P=T;P<T+n;P++){
		printf("T[%d]= %d \n ",P-T,*P);

	}
}