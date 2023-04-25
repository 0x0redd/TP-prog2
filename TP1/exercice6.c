#include<stdio.h>
#include<stdlib.h>
int main(){
  int *T,*P1,*P2;
  int n,i,temp;
    do{
    printf("saisire la taille du tableau \n");
    scanf("%d",&n);}while(n<0);
    
    T=(int*) malloc(n * sizeof(int));
    
  printf("saisire les element du tab \n ");
  
  for(i=0,P1=T;i<=(n-1);P1++,i++){
                printf("T[%d]",i);
                scanf("%d",&temp);
                printf("\n");
                *P1=temp;}
for(i=0,P1=T,P2=T+(n-1);P1<=P2;P1++,P2--){
  temp=*P1;
  *P1=*P2;
  *P2=temp;
  }
  
  for(i=0,P1=T;i<=(n-1);P1++,i++){
              printf("T[%d]= %d \n",i,*P1);}
  
  return 0;
  
}
