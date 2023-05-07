#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copy(char *s1 ,char *s2){
    while(*s1!='\0'){
        *s2=*s1;
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
    copy(s1,s2);

    printf("%s",s1);
}
