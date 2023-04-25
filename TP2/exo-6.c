#include <stdio.h>
#include <stdlib.h>

void fct3(int *,int , int *,int *, int *);

int main(){

	int *T,N,nbz,np,nimp;
	
	printf("donner la taille du tableau : ");
	scanf("%d",&N);
	T=(int*)malloc(N*sizeof(int));
	for(int *i=T;i<T+N;i++){
		printf(" \n T[%d]= ",(int)(i-T));
		scanf("%d",i);
	}
	for(int *i=T;i<T+N;i++){
		printf(" T[%d]=%d\t",(int)(i-T),*i);
	}

	fct3(T,N,&np,&nimp, &nbz);
	printf("\n \n nombre de : zero = %d pair =%d impair = %d \n\n",nbz,np,nimp);
	
	return 0;
}

void fct3(int *A,int N, int *np,int *nimp, int *nbz){
	*nbz = *np = *nimp = 0;
	for(int *i=A;i<A+N;i++){
		if( (*i)== 0) {(*nbz)++ ; }
		else if( ( (*i)%2) == 0) { (*np)++ ; }
		else if( ( (*i)%2) != 0) { (*nimp)++ ; }
	}
}
