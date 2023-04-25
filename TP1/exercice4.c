#include<stdio.h>
main(){
	int tab[]={4,12,53,19,11,60,24,12,89,19};
	int *p,i=0;
	p = tab;
	while(*p!=0){
		printf("'&'tab[%d]=%d \n",i,p);
		i++;
		p++;
	}
}
