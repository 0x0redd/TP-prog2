#include <stdio.h>
void Permut ( float *A, float *B) {
    float temp ;
    temp = *A;
    *A = *B ;
    *B = temp ;
}
int RangMinTab ( int N, int P , float Tab[ ]){
    int i,resultat=P ;
    for( i=P+1;i<N;i++)
    if(Tab[i]<Tab[resultat])
    resultat=i ;
    return resultat;
}
void TriSel(int N,float Tab[]){
    int i;
    for(i=0;i<N-1;i++){
    int min = RangMinTab(N,i,Tab);
    Permut(&Tab[i],&Tab[min]);
}
}
void ChargerTab(int *N,float Tab[]){
    int i;
    printf("donner la dimention de tab" );
    scanf("%d",N);
    for(i=0;i<*N;i++){
    printf("Valeur %d : ",i +1);
    scanf("%f",&Tab[i]);
}
printf("\n");
}
void EditerTab(int N, float Tab[]){
    int i;
    for (i=0;i<N;i++){
    printf( "Valeur %d = %f \n",i+1,Tab[i]);
    }
    printf("\n");
}

int main (int argc , char **argv){
float myTab[100];
int nb;
ChargerTab(&nb,myTab);
EditerTab(nb,myTab);
TriSel(nb,myTab);
EditerTab(nb,myTab);
}
