#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct compte{
	int numCom;
	char nom[25];
	float solde;
}compte;

compte C[50];
int Nombre=0;

compte saisirCompte(compte *cpt){
	printf("le numero du compte : ");scanf("%d",&cpt->numCom);
	printf("saisir le Nom : ");scanf("%s",cpt->nom);
	printf("saisir le solde : ");scanf("%f",&cpt->solde);
	return *cpt;
}

void afficherCompte(int num){
	int i=0;
	while(C[i].numCom != num)
		i++;
	printf("N°Compte : %d\nNom : %s\nSole : %f\n",C[i].numCom,C[i].nom,C[i].solde);
	return ;
}

void saisir_N_Compte(int N){
	for(int i=0;i<N;i++){
		printf("compte n %d\n",i+1);
		saisirCompte(&C[i]);
		Nombre++;
	}
	return;
}

int existe(int n){
	int i=0;
	while(C[i].numCom != n && i<Nombre)
		i++;
	if(i==Nombre)
		return 0;
	return 1;
}

void afficherSolde(int n){
	if(existe(n)){
		int i=0;
		while(C[i].numCom != n)
			i++;
		printf("Solde du compte n° %d est : %0.2f\n",n,C[i].solde);
		return;
	}else
		printf("compte inexistant\n");
	return;
}

void retrait(int num,float mt){
	if(mt >= 1000){
		printf("plafont de retrait atteint\n");
		return;
	}
	int i=0;
	while(C[i].numCom != num)
		i++;
	if(i<Nombre){
		C[i].solde -= mt;
	}else{
		printf("Compte introuvable\n");
	}
}

void versement(int num,float mt){
	int i=0;
	while(C[i].numCom != num)
		i++;
	if(i<Nombre){
		C[i].solde += mt;
	}else{
		printf("Compte introuvable\n");
	}
}

void afficheDebiteurs(int Nombre){
	int i=0,cpt=1;
	while(i<Nombre){
		if(C[i].solde <= 0){
			cpt++;
			if(cpt==2)
				printf("les comptes dépiteur : \n");
			printf("%d : %s\n",C[i].numCom,C[i].nom);
		}
		i++;
	}
	if(cpt==1)
		printf("il y a aucun compte dépiteur\n");
} 

int main(){
	int num;
	compte *cpt;
	float mt;

	cpt = (compte *) malloc(sizeof(compte));

	printf("remplissage d'un compte \n");
	saisirCompte(cpt);

	printf("affichege du compte");

	printf("N°Compte : %d\nNom : %s\nSole : %f\n",cpt->numCom,cpt->nom,cpt->solde);

	printf("vous voulez creer N Compte : \n");
	scanf("%d",&Nombre);

	saisir_N_Compte(Nombre);

	printf("donner num de compte \n");
	scanf("%d",&num);

	afficherCompte(num);

	printf("donner le montant que vous voulez retraire\n");
	scanf("%f",&mt);

	retrait(num,mt);
	afficherCompte(num);

	printf("versemment\n");
	printf("donner le montant que vous voulez versez \n");
	scanf("%f",&mt);

	versement(num,mt);

	afficherCompte(num);

	afficheDebiteurs(Nombre);
	return 0;
}