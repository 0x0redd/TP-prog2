#include<stdio.h>
#include<stdlib.h>
main()
{
	int *T1 ,*T2,N,M,*P1,*P2;
	do{
		printf("saisir la taille du tab 1 \n ");
		scanf("%d",&N);
	}while(N<=0);
	
	do{
		printf("saisir la taille du tab 2 \n ");
		scanf("%d",&M);
	}while(M<=0);
	
	T1=(int*)malloc(N*sizeof(int));
	
	if(T1=NULL){
		printf("memoire insuffisant \n ");
		exit(0);
	}
	
	T2=(int*)malloc(M*sizeof(int));
	
	if(T2=NULL){
		printf("memoire insuffisant \n ");
		exit(0);
	}
	printf("saisire les elements du T1 \n ");
	for(P1=T1;P1=T1+N;P1++){
		printf("T1[%d]= \n ",P1-T1);
		scanf("%d",&P1);
	}
	printf("saisire les elements du T1");
	for(P2=T2;P2=T2+M;P2++){
		printf("T2[%d]= \n ",P2-T2);
		scanf("%d",&P2);
	}
	if(M!=N) printf("les deux yan ne sont pas egaux \n ");
	else{
		for(P1=T1,P2=T2 ; P1<T1+N ; N++,M++){
			if(*P1!=*P2){
				printf("les deux tab ne sont pas egaux \n ");
				return 0;
			}
		}
	}
}
