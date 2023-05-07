#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 1 */
int taille(char* s){
    int i=0;
    while(*s != '\0' ){
        i++;
        s++;
    }
    return i;
}

int main(){
    char *s;
    s=(char *)malloc(50*sizeof(char));
    printf("donner une chaine \n ");
    scanf("%s",s);
    printf("la taille de la chaine est %d",taille(s));
}