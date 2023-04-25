#include<stdio.h>
main()
{
	int a[]={12,23,34,45,56,67,78,89,90};
	int *p;
	int n;
	p=a;
	n=*p+2;
	printf("*p+2= %d \n",n);
	printf("*(p+2) = %d \n ",*(p+2));
	printf("&p+1 = %d \n ",&p+1);
	printf("&a[4]-3 = %d \n",&a[4]-3);
	printf("a+3 = %d \n",a+3);
	printf("&a[7]-p = %d \n",&a[7]-p);
	printf("p+(*p-10) = %d \n",p+(*p-10));
	printf("*(p+*(p+8)-a[7]) = %d \n",*(p+*(p+8)-a[7]));
	return 0;
}


/* *p+2= 14
*(p+2) = 34
 &p+1 = 6487576
 &a[4]-3 = 6487524
a+3 = 6487532
&a[7]-p = 7
p+(*p-10) = 6487528
*(p+*(p+8)-a[7]) = 23 */ 
