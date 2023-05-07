#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rechar(char* s,char a){
    int i;
    for(i=0;s!='\0';i++,s++)
    {if(s == a) return i;}
    return -1;
}
int main(){
    char *s;
    char c;
    int i;
    s=(char)malloc(50*sizeof(char));
    printf("donner une chaine \n ");
    scanf("%s",s);
    printf("donner le caractere que vous vouler chercher \n");
    scanf("%s",&c);
    i = rechar(s,c);
    if(c==-1) printf("le caractère que vous cherchez est introuvable \n");
    else printf("le caractère %c se trouve dans l'index s[%d]\n ",c,i);
}