#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int some(int n){
	int i=0,s=0;
    while(i<=n){
    	s = s+i;
    	i+=2;
	}
	return s;
    }

int main(){
    int n,s;
    printf("donner un entier n \n");
    scanf("%d",&n);
    s = some(n);
    printf("la valeur de la somme des entier pairs inferieurs ou egal a %d est : %d ",n,s);

}
