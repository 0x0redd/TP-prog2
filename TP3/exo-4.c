#include<stdio.h>
#include<stdlib.h>

void toursHanoi(int n, char D, char A, char I) {
    if (n == 1)
      printf("Disque 1 de %c a %c \n" , D , A);
    else {
      
      toursHanoi(n - 1, D, I, A);
      printf("Disque %d de %c a %c \n", n , D ,A);
      
      toursHanoi(n - 1, I,A,D);
    }
}

main() {
    int nDisques;
    printf("dinner le nombre de disque \n");
    scanf("%d",&nDisques);
    toursHanoi(nDisques, 'A', 'B', 'C');
    system("pause");
}
