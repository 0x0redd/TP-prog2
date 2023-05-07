#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void concat(char *s1 ,char *s2){
    while(*s1!='\0'){s1++;}
    while(*s2!='\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
}

int main(){
    char *s1;
    char *s2;
    s1 =(char *)malloc(50*sizeof(char));
    s2 =(char *)malloc(50*sizeof(char));
    printf("donner une chaine 1 \n");
    scanf("%s",s1);
    printf("donner une chaine 2 \n");
    scanf("%s",s2);
    concat(s1,s2);
    printf("%s",s1);
}