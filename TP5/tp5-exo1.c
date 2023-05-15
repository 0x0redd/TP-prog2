#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char nom[100];
    int prix;
} art;

void add(art *a, int n) {
    int i;
    for(i=0; i<n; i++){
        printf("donner le nom\n");
        scanf("%s", (a+i)->nom);
        printf("donner le prix\n");
        scanf("%d", &(a+i)->prix);
    }
    return;
}

void affiche(art *a, int n) {
    int i;
    for(i=0; i<n; i++){
        printf("%s : %d\n", (a+i)->nom, (a+i)->prix);
    }
    return;
}

void save(art *a, int n, char *fichier) {
    int i;
    FILE* file = fopen(fichier, "a");
    if(file == NULL){
        printf("Impossible d'ouvrir le fichier %s\n", fichier);
        return;
    }
    for(i=0; i<n; i++){
        fprintf(file, "%s : %d\n", (a+i)->nom, (a+i)->prix);
    }
    fclose(file);
    printf("le fichier est sauvegarde %s\n", fichier);
}

void read(char *fichier) {
    FILE* file = fopen(fichier, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier %s\n", fichier) ;
        return;
    }
    char line[1000];
    while(fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}


int main(){
    int n;
    art *a;
    char fichier[100];

    printf("donner le nombre des articles :\n");
    scanf("%d", &n);

    a = (art*)malloc(n*sizeof(art));

    add(a, n);

    printf("la liste des articles:\n");
    affiche(a, n);

    printf("donner le nom du fichier:\n");
    scanf("%s.txt", fichier);

    save(a, n, fichier);

    read(fichier);

    return 0;
}
