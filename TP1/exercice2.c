#include<stdio.h>
main()
{
	int a=1,b=2,c=3;
	int *p1,*p2;
	printf(" a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	p1=&a;
		printf("p1=&a \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	p2=&c;
		printf("p2=&c \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	*p1=(*p2)++;
		printf("*p1=(*p2)++ \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	p1=p2;
		printf("p1=p2 \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	p2=&b;
		printf("p2=&b \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	*p1-=*p2;
		printf("*p1-=*p2\n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	++*p2;
		printf("++*p2 \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	*p1*=*p2;
		printf("*p1*=*p2 \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	a=*p2**p1;
		printf("a=*p2**p1 \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	p1=&a;
		printf("p1=&a \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
	*p2/=*p1;
		printf("*p2/=*p1 \n");
		printf("		a=%d ; b=%d ; c=%d ; p1=%d ;*p1=%d ; p2=%d ; *p2=%d \n ",a,b,c,p1,p2);
}
