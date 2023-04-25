#include<stdio.h>
#include<stdlib.h>

int** allouerMat(int m,int n){
	int **A;
	A=(int**)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++){
		A[i]=(int*)malloc(n*sizeof(int));
	}
	return A;
}
	
	void remplirMat(int**A,int m,int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("T[%d][%d]=",i,j);
			scanf("%d",*(A+i)+j);
		}
	}
}

void afficherMat(int**A,int m, int n){
	int i,j;
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t", *(*(A+i)+j) ) ;
		}
		printf("\n");
	}
}

void sommeMat(int **A,int **B,int **C,int m,int n){
	int i,j;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(*(C+i)+j) = (*(*(A+i)+j))+(*(*(B+i)+j));
		}
	}
}

int main(){
	int m,n;
	int **A,**B,**C;

	printf("entrer la taile du matrices A et B (m,n) : ");
	scanf("%d%d", &m,&n);
	printf("\n remplir de matrice A\n");
	A = allouerMat(m,n); remplirMat(A,m,n);
	printf("\n remplir de matrice B\n");
	B = allouerMat(m,n); remplirMat(B,m,n);
	
	printf("\n resultat :\n");
	printf("\n A : "); afficherMat(A,m,n);
	printf("\n B : "); afficherMat(B,m,n);
	C = allouerMat(m,n);
	sommeMat(A,B,C,m,n);
	printf("\n Le somme de A et B : A+B=C \n");
	afficherMat(C,m,n);
	return 0;
}