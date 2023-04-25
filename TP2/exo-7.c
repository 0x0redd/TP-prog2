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
		printf("%d\t",*(*(A+i)+j));
		}
	printf("\n");
	}
}

void ProduitMat(int **A,int **B,int **C,int m,int n,int p){
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			*(*(C+i)+j)=0;
			for(k=0;k<n;k++){
				*(*(C+i)+j) += (*(*(A+i)+k))*(*(*(B+k)+j));
			}
		}
	}
}
int main(){
	int m,n,p;
	int **A,**B,**C;

	printf("entrer la taile du matrices A(m,n) : ");
	scanf("%d%d", &m,&n);
	printf("entrer la taile du matrices B(n,p) : ");
	scanf("%d%d", &n,&p);
	A = allouerMat(m,n); remplirMat(A,m,n);
	printf("\n remplir de matrice B\n");
	B = allouerMat(n,p); remplirMat(B,n,p);
	printf("\n resultat :\n");
	printf("\n A : "); afficherMat(A,m,n);
	printf("\n B : "); afficherMat(B,n,p);
	C = allouerMat(m,p);
	ProduitMat(A,B,C,m,n,p);
	printf("\n Le produit de A et B : AxB=C \n");
	afficherMat(C,m,p);
	return 0;
}


