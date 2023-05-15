#include <stdio.h>
#include<string.h>
int main(){
    FILE *fichier;
    /*ouverture d'un fichier a laide de la fonction fopen*/
    fichier = fopen("fichien.txt","r");

    /*Il faut toujours fermer un fichier après l’avoir utilisé*/
    fclose(fichier);
}

void main(){
    char nomfich[20];
    FILE *pf;
    int c;
    printf("nom de sauvegarde du fichier :\n");
    gets(nomfich);
    pf = fopen(nomfich,"r");
    if(pf == NULL)
    printf("impossible d'ouvrir le fichier \n");
    else
    /**/
    fclose(pf);

    fputs(char *c,FILE *pf);

}

void main() {
    char nomfich[20] ; /* fichier à traiter */
    FILE *pf ;
    char BigBuf[256] ; /* pour stocker une ligne de caractères */
        printf("Nom de sauvegarde du fichier : ") ;
        gets(nomfich) ;

    pf = fopen(nomfich, "r") ;

        if (pf == NULL) {
            printf("Impossible d'ouvrir le fichier %s \n", nomfich) ;
            return 1 ;
        }

         while (fgets(BigBuf, sizeof BigBuf, pf) != NULL)
        fputs(BigBuf, stdout) ; /* écrire la ligne lue à partir du fichier référencé par pf sur la sortie
    standard */
    fclose(pf) ; /* fermer le fichier référencé par pf */
}