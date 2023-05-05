#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct etudiant{
    char prenom[20];
    int age;
};
typedef struct etudiant etud;
int main(void){
    etud *et1;
    etud et2;
    // reservation de la memoire
    et1=(struct etusiant*)malloc(sizeof(struct etudiant));
    
    et1=&et2;
    
    printf("saisir votre prenom \n ");
    scanf("%s",&et1->prenom);

    printf("saisire votre age : \n ");
    scanf("%d",&et1->age);
    
    printf("voici vos info ");

    printf("prenom : %s",et1->prenom);
    printf("age : %d ",et1->age);

}

