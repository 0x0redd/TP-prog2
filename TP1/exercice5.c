#include<stdio.h>
main()
{
	int tab[]={4,-2,-23,4,34,-67,8,9,-10,11,4,12,-53,19,11,-60,24,12,89,19};
	int i,j;
	int *p;
	p=tab;
	for(p=tab ; p<tab+20 ; p++){
        printf("%d\t",*p);
        i++;
        if(i%5==0){
            printf("\n");
        }

	
/*	while(*p!=0){
		i=0;
		while(i!=5){
			printf("%d \t",*p);
			i++;
			p++;
		}
		printf("\n");
	} */
	
}
}
