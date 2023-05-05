#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct etudiant{
    char prenom[20];
    int age;
};
typedef struct etudiant etud;

int main(void){
    etud *tab;
    int n,i;
    printf("saisir le nombre d'etudiant ");
    scanf("%d",&n);

// reservation de la memoire du tab 
tab=(struct etusiant*)malloc(n*sizeof(struct etudiant));

for(i=0;i<n;i++){
    printf("------ etudiant  N %d ------- \n ",i);

    printf("saisir le prenom");
    scanf("%s",&(tab+i)->prenom);
    printf("saisir l'age :");
    scanf("%d",&(tab+i)->age);
}
}