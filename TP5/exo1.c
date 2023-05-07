#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char nom[100];
    int prix;
}art;

void add(art *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("donner le nom\n");
        scanf("%s",(a+i)->nom);
        printf("donner le prix\n");
        scanf("%d",(a+i)->prix);
    }

}

void affiche(art *a,int n){
    for(i=0;i<n;i++){
        printf("%s : %d",(a+i)->nom,(a+i)->prix);
    }

}

void save(art *a ,int n,char *fichier){

}

void read(char *fichier){

}


int main(){
    int n;
    art *a;
    char s;

    printf("donner le nombre des articles :\n");
        scanf("%d",&n);

    a=(char*) malloc(n*sizeof(art))

    add(a,n);

    pritnf("la liste des articles:\n");

    affiche(a,&n);

    printf("donner le nom du fichier\n:");

    scanf("%s",&s);
}
