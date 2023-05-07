#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comp(char* s1,char* s2){
   int i = 0;
  while (s1[i] == s2[i]) {
    if (s1[i] == '\0')
      return 0;
    i++;
  }
  return s1[i] - s2[i];
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
    if(comp(s1,s2)<0)
    printf(" %s est avant  %s \n",s1,s2);
    else if(comp(s1,s2)==0) printf(" %s et %s sont identiques \n",s1,s2);
    else printf("%s vient apres %s ",s1,s2);
}