#include<conio.h>
#define n 10

void main(){
    float t[n], *p;
    int i;
    printf("donner %d entier : ",n);

    p = t;
    for(i=0;i<n;i++){
        scanf("%f",p+i);
    }

    printf("\n tableau lu \n ");
    for(i=0;i<n;i++){
        printf("t[%d]=%f",i,*p+i);
    }

}
void main(){
    float t[n], *p;
    int i;

    printf("donner %d entier : ",n);

    for(p=t;p<t+n;p++){
        scanf("%f",p);
    }

    printf("\n tableau lu \n ");
    for(p=t;p<t+n;p++){
         printf("t[%d]=%f",p-t,*p);
    }
}