#include<stdito.h>
#include<stdlib.h>
int main(){
    short *p;
    int n,i;
    printf("entez la taille n du tableau \n ");
    scanf("%d",&n);
    p=(short*)malloc(n*sizeof(short));
    if(p=NULL){
        printf("memoire non disponible");
        system("pause");
        return 1;
    }

    printf("saisie du tableau : ");
    for(i=0;i<n;i++){
        scanf("%d", p + i ) ;
    }

    printf("Affichage du tableau ") ;
    for(i=0;i<n;i++){
        printf("%d\t", *( pt + i ) ) ;
    }   
    free(p);
    return 0; 
}