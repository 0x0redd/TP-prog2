#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int taille(char* s){
    int i=0;
    while(*s != '\0' ){
        i++;
        s++;
    }
    return i;
}
int nbmot(char *s){
    int i=1;
    while(*s!='\0')
  {
    if(*s == ' ')
    {
      i++; 
    } 
    s++;
  }  
    return i;
}

int voyell(char *s){
    int i=0;
    while(*s!='\0'){
            if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'y') i++;
        s++;
    }
    return i;

}
int main(){
    char *s;
    int t=0,i=0,j=0;

    s=(char *)malloc(50*sizeof(char));

    printf("donner une chaine \n");
    fgets(s,50,stdin);


    t=taille(s);
    printf("la longeur de la chaine saisie est %d \n",t);

    i=nbmot(s);
    printf("le nombre de mot de la chaine saisie est %d \n",i);

    j=voyell(s);
    printf("le nombre de voyelles est %d et le nombre de consonne est %d \n",j,(t-j-i));


    printf("passant tout les caractères de la chaine en majiscules");
    printf("avant %s",*s);

    prnitf("on test si la chaine est palindrome  ");

    printf("les 3 premiers caractères de la chaine ");

    printf("les 3 derniers caracteres de la chaine ");

    printf("la chaine : %s");

    printf("inverson les mots de la chaine : \n  ");
    printf("avant %s",cha1);
    printf("apres %s", );

*/



}
