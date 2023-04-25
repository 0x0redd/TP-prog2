#include<stdio.h>
main(){
	int a[]={12,23,34,45,56,67,78,89,90};
	int *p;
	p=a;
	printf("*p+2 = %d \n",*p+2);
	printf("*(p+2) = %d \n",*(p+2));
	printf("&p+1 = %d \n",&p+1);
	printf("&a[4]-3 = %d \n",&a[4]-3);
	printf("a+3 = %d \n",a+3);
	printf("&a[7]-p = %d \n",&a[7]-p);
	printf("p+(*p-10) = %d \n",p+(*p-10));
	printf("*(p+*(p+80)-a[7]) = %d \n ", *(p+*(p+80)-a[7]));
	
}
