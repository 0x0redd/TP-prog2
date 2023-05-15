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

char maj(char *s){
    for(int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]+ ('A'-'a') ;
	}
}

int palindrome(char *s,int n){
    int i,j,a=0;
        for(i = 0, j=n-1; i<(n/2)+1; i++, j-- ){
            if (s[i] == s[j] ); a++;
        }
            if(a==n) 
                printf ("le mot %s est palindrome\n",s);
            else
                printf ("le mot %s n'est pas palindrome \n",s);
}

int trois_premiers(char s[],int n){
    int i;
    for(i=0;i<=2;i++){
        printf("%c",s[i]);
    }
}

int trois_derniers(char *s,int n){
    int i;
    s--;
		for(i=n-3;i<n;i++)
			printf("%c",s[i]);		
}

void inverser_chaine(char s[]){
	int i, n = strlen(s);
	char aide;	
	for(i = 0; i < (n+1)/2; i++){
		aide = s[i];
		s[i] = s[n-1-i];
		s[n-1-i] = aide;
	}	
}

int main(){
    char *s;
    char *c;
    int t=0,i=0,j=0,k=0;

    s=(char *)malloc(500*sizeof(char));
    c=(char *)malloc(501*sizeof(char));


        printf("donner une chaine \n");
        fgets(s,501,stdin);
        t=taille(s);
        printf("la longeur de la chaine saisie est %d \n",t);

    
   

    strcpy(c,s);

    t=taille(s);
    printf("la longeur de la chaine saisie est %d \n",t);

    i=nbmot(s);
    printf("le nombre de mot de la chaine saisie est %d \n",i);

    j=voyell(s);

    printf("le nombre de voyelles est %d et le nombre de consonne est %d \n",j,(t-j-i));

    printf("passant tout les caractères de la chaine en majiscules\n");

        printf("avant %s\n",s);
        maj(c);
        printf("apres %s\n",c);
        
    printf("on test si la chaine est palindrome \n");

        palindrome(s,t);

    printf("Les 3 premiers caractères de la chaine \n");

        trois_premiers(s,t);

    printf("Les 3 derniers caractères: \n");
    
        trois_derniers(s,t);


        inverser_chaine(s);

    printf("la chaine inverser : %s  \n",s );

    free(s);
    free(c);
}