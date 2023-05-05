#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
struct Tdate{
    int j;
    int m;
    int annee;
};
typedef struct Tdate Tdate;

typedef struct personne{
    char nom[max];
    char prenom[max];
    Tdate naissance;
}personne;

int main(void){
    personne etud={"othmane","ferrah",{15,11,2001}};


    printf("{%s %s {%d %d %d }}",etud.nom,etud.prenom,etud.naissance.j,etud.naissance.m,etud.naissance.annee);

}