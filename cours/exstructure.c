#include<stdio.h>
struct livre{
    char titre[10];
    char auteur[10];
    int  edition;
    float prix;
};
typedef struct livre livre;
int main(){
    livre l1,l2,l3={"langage c","aaa",2000,200.5};
    printf("donner les informations du livre l1 \n ");
    printf("donner le titre \n ");
    gets(l1.titre);
    printf("donner l'auteur \n ");
    gets(l1.auteur);
    printf("donner edition \n");
    scanf("%d",&l1.edition);
    printf("donner le prix \n");
    scanf("%f",&l1.prix);
    l2=l3;
    printf("afficher les informations de l2 : \n ");
    printf("%s %s %d %2.f",l2.titre,l2.auteur,l2.edition,l2.prix);

    return 0;
    
}