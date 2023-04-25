#include<stdio.h>
#include<stdlib.h>

/*int elmanquant(int *T, int N){
	int i=1;
	int *P=T;
	if((*P+1)!=*(P+1)) 
		return *P+1;
		
	return elmanquant(P+1,N);
}*/
int elmanquant(int *T, int N,int i){
	while(i<n){
		if(T[i]!=i)
		return i;
		else 
		return elmanquant(T,N,i+1)
	}
	return -1;
}

main(){
	int *T,N,M,i,*P;
	do{
		printf("entrer deux entiers");
		scanf("%d %d",&N,&M);
	}while(N<=0||M<=0||M<N);
	
	T=(int *)malloc(N*sizeof(int));
	
	for(P=T;P<T+N;P++){
		printf("T[%d]=",P-T);
		do {
		scanf("%d",T+1);} while(*P>=M);
	}

	printf("l'elemenr manquant est : %d",elmanquant(T,N));
	
}

