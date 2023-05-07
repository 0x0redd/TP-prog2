#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int resouschaine(char* s , char* c){
    char *p1 = s;
    char *p2 = c;
    char *p3; 
    int i=1;
    if(c=='\0') return -1;

    while(*p1 != '\0'){
        p3 = p1;
        i++;
        while(*p2 != '\0' || *p3 == *p2){
            p3++;
            p2++;
        }
        if(*p2 == '\0')
        return p1;
        p1++;
        p2 = c;
    }
    return -1;
}


int main(){
    char *s;
    char *c;
    int i;
    s = (char *)malloc(100*sizeof(char));
    c = (char *)malloc(100*sizeof(char));
    printf("donner une chaine \n");
    scanf("%s",s);
    printf("donner la sous chaine que vous vouler chercher \n");
    scanf("%s",c);
    i = resouschaine(s,c);
    printf("l'indice de la première occurrence de %s dans %s est %d ",s,c,i-s);
}