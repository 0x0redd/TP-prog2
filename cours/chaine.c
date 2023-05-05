#include<stdio.h>
int main(void){
    char buf[6];
    printf("saisire une chaie : ");
    gets(buf); /*this is similar to scanf() tho it puts evrithing you type f buf until  \n */
    fgets(buf,6,stdin);
    printf("la chaine est : %s \n ",buf);
    puts(buf);
}