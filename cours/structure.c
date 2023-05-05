#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct client{
char nom[100] ; // nom du client
char prenom[100] ; // prénom du client
int numero ; // le numéro du client
double montant ; // somme sur son compte
double ancien_montant[10] ; // ses 10 anciens montants
};
typedef struct client client;
void main(){
    client client1;
    client client2={"mohammad","ali",3,50,55};
    client1.numero = 12;
    client1.montant = 2222;
    strcpy(client1.nom,"martin");
    printf(" \n clinet1 : {%s,%s,%d,%f,%f}",client1.nom,client1.prenom,client1.numero,client1.montant,client1.ancien_montant);
    printf(" \n clinet2 : {%s,%s,%d,%f,%f}",client2.nom,client2.prenom,client2.numero,client2.montant,client2.ancien_montant);
    printf("\n apree");
    client1=client2;
     printf(" \n clinet1 : {%s,%s,%d,%f,%f}",client1.nom,client1.prenom,client1.numero,client1.montant,client1.ancien_montant);
    printf(" \n clinet2 : {%s,%s,%d,%f,%f}",client2.nom,client2.prenom,client2.numero,client2.montant,client2.ancien_montant);
}